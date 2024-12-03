#include <Mozzi.h>
#include <Sample.h>
#include "cherryPHRASE.h"
#include <mozzi_rand.h>
#include <Line.h>
#include <Smooth.h>

// Define analog input pins
const int SPEED_PIN = A3;    // Controls scrubbing speed
const int SMOOTH_PIN = A4;   // Controls smoothing amount
const int RANDOM_PIN = A5;   // Controls amount of randomness

Sample <cherryPHRASE_NUM_CELLS, MOZZI_AUDIO_RATE, INTERP_LINEAR> aSample(cherryPHRASE_DATA);
Line <Q16n16> scrub;
const unsigned int AUDIO_STEPS_PER_CONTROL = MOZZI_AUDIO_RATE / MOZZI_CONTROL_RATE;

int offset = 0;
int offset_advance = 400;
float smoothness = 0.9f;
Smooth <int> kSmoothOffsetAdvance(smoothness);

// New variables for control
int base_speed = 0;
int random_amount = 0;

void setup(){
  randSeed();
  aSample.setLoopingOn();
  
  // Set analog input pins
  pinMode(SPEED_PIN, INPUT);
  pinMode(SMOOTH_PIN, INPUT);
  pinMode(RANDOM_PIN, INPUT);
  
  startMozzi();
}

void updateControl(){
  // Read analog inputs and map them to useful ranges
  base_speed = map(mozziAnalogRead(SPEED_PIN), 0, 1023, -1000, 1000);
  smoothness = (float)map(mozziAnalogRead(SMOOTH_PIN), 0, 1023, 0, 95) / 100; // 0.0 to 0.95
  random_amount = map(mozziAnalogRead(RANDOM_PIN), 0, 1023, 0, 50);
  
  // Initialize a new Smooth object with updated smoothness
  kSmoothOffsetAdvance = Smooth<int>(smoothness);
  
  // Calculate offset advance with base speed and random variation
  offset_advance = base_speed;
  
  // Add random variation based on RANDOM_PIN
  if(random_amount > 0) {
    offset_advance += rand(random_amount) - rand(random_amount);
    
    // Random direction changes - more likely with higher random_amount
    if(!rand(MOZZI_CONTROL_RATE - random_amount)) {
      offset_advance = -offset_advance;
    }
    
    // Random speed jumps - more likely with higher random_amount
    if(!rand(MOZZI_CONTROL_RATE - random_amount)) {
      offset_advance = base_speed + (500 - rand(1000));
    }
  }
  
  int smooth_offset_advance = kSmoothOffsetAdvance.next(offset_advance);
  offset += smooth_offset_advance;
  
  // Keep offset in range
  if (offset >= cherryPHRASE_NUM_CELLS) offset -= cherryPHRASE_NUM_CELLS;
  if (offset < 0) offset += cherryPHRASE_NUM_CELLS;
  
  scrub.set(Q16n0_to_Q16n16(offset), AUDIO_STEPS_PER_CONTROL);
}

AudioOutput updateAudio(){
  unsigned int index = Q16n16_to_Q16n0(scrub.next());
  return MonoOutput::from8Bit(aSample.atIndex(index));
}

void loop(){
  audioHook();
}
