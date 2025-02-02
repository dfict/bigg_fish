#ifndef cherry2_H_
#define cherry2_H_
 
#include <Arduino.h>
#include "mozzi_pgmspace.h"
 
#define cherry2_NUM_CELLS 4914
#define cherry2_SAMPLERATE 16384
 
CONSTTABLE_STORAGE(int8_t) cherry2_DATA [] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -2, -3, -2,
-2, -2, -3, -2, -3, -2, -3, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -5, -5, -5, -5, -5,
-5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6,
-6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5,
-4, -4, -4, -4, -4, -5, -4, -5, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2,
-1, -1, -1, -1, -2, -2, -2, -2, -1, -1, -1, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2,
1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1,
1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 0,
-1, -1, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 1, 0, 0, -1, -2, -2, -3, -3,
-3, -3, -3, -3, -2, -2, -2, -1, -1, -1, -1, -2, -2, -3, -4, -5, -6, -6, -7, -7,
-7, -7, -6, -6, -5, -4, -4, -3, -3, -3, -4, -4, -5, -5, -6, -7, -7, -7, -7, -7,
-6, -5, -5, -3, -3, -3, -2, -2, -2, -3, -3, -4, -5, -6, -6, -7, -7, -7, -7, -6,
-5, -4, -3, -2, -2, -1, -1, -1, -2, -2, -3, -4, -5, -6, -6, -6, -5, -5, -4, -3,
-3, -1, -1, 0, 0, 0, 0, -1, -2, -2, -4, -4, -5, -6, -6, -6, -5, -5, -4, -2, -1,
0, 1, 2, 2, 1, 1, 0, -1, -1, -3, -3, -4, -4, -3, -3, -2, -1, 1, 2, 3, 4, 4, 5,
5, 4, 3, 2, 1, 0, -1, -1, -2, -2, -1, -1, 1, 2, 4, 5, 6, 7, 7, 7, 7, 6, 5, 3, 2,
1, 0, 0, 0, 0, 2, 3, 5, 6, 7, 8, 8, 9, 9, 8, 7, 5, 4, 3, 1, 0, -1, -1, 0, 0, 2,
3, 5, 7, 9, 10, 10, 10, 9, 8, 7, 5, 3, 2, 1, -1, 0, 0, 1, 3, 4, 7, 8, 10, 10,
11, 11, 10, 9, 7, 6, 3, 2, 0, -1, -1, -1, 0, 1, 3, 5, 7, 9, 11, 11, 12, 11, 9,
8, 6, 4, 1, -1, -2, -2, -2, -1, 1, 3, 5, 7, 9, 10, 11, 11, 11, 10, 8, 6, 3, 1,
-1, -3, -3, -4, -3, -1, 1, 3, 6, 8, 11, 12, 12, 12, 11, 10, 7, 4, 2, -1, -2, -4,
-3, -3, -2, 1, 3, 7, 9, 11, 13, 13, 13, 12, 10, 8, 5, 2, 0, -3, -4, -5, -4, -3,
-1, 2, 5, 8, 11, 14, 14, 15, 14, 12, 9, 6, 3, -1, -4, -5, -6, -5, -4, -1, 2, 6,
9, 12, 14, 15, 15, 14, 13, 9, 6, 2, -1, -4, -6, -6, -7, -5, -3, 0, 4, 8, 11, 14,
16, 17, 16, 14, 11, 7, 4, -1, -4, -7, -8, -7, -7, -4, 0, 4, 8, 12, 15, 17, 17,
17, 15, 12, 8, 4, -1, -5, -7, -9, -9, -8, -6, -1, 3, 7, 12, 16, 18, 19, 19, 17,
14, 9, 5, -1, -5, -8, -9, -10, -9, -6, -2, 3, 8, 13, 17, 19, 20, 20, 18, 15, 9,
5, -1, -6, -9, -11, -12, -11, -9, -3, 1, 7, 12, 16, 19, 20, 21, 19, 16, 9, 5,
-2, -7, -10, -12, -14, -13, -10, -5, 0, 5, 12, 16, 20, 20, 21, 19, 16, 9, 4, -3,
-9, -13, -15, -16, -16, -13, -8, -2, 3, 11, 15, 19, 20, 21, 19, 15, 8, 3, -4,
-10, -15, -16, -18, -18, -14, -10, -2, 2, 10, 15, 19, 20, 21, 19, 15, 9, 2, -4,
-12, -15, -18, -20, -20, -17, -11, -5, 1, 9, 14, 18, 19, 21, 19, 15, 8, 1, -6,
-14, -17, -20, -22, -22, -19, -13, -6, -1, 8, 13, 18, 19, 21, 20, 15, 8, 1, -7,
-15, -19, -22, -24, -24, -21, -15, -8, -2, 7, 12, 17, 18, 21, 20, 15, 8, 0, -8,
-17, -20, -24, -26, -27, -23, -16, -10, -3, 6, 12, 18, 19, 21, 21, 15, 8, 0, -9,
-18, -23, -26, -28, -28, -25, -19, -10, -5, 6, 12, 16, 18, 21, 21, 16, 7, -1,
-10, -21, -22, -28, -30, -30, -28, -18, -13, -4, 5, 12, 18, 19, 23, 22, 16, 7,
-1, -11, -21, -25, -29, -31, -31, -29, -20, -13, -5, 6, 11, 17, 18, 23, 22, 17,
6, -1, -12, -23, -24, -31, -33, -33, -30, -20, -15, -6, 5, 10, 17, 19, 24, 22,
17, 6, -2, -14, -25, -26, -33, -35, -35, -32, -20, -16, -6, 6, 9, 18, 19, 24,
23, 16, 5, -3, -15, -26, -28, -35, -36, -36, -33, -21, -16, -6, 7, 10, 18, 20,
25, 23, 17, 4, -2, -16, -27, -25, -38, -36, -37, -34, -18, -17, -4, 8, 11, 21,
22, 27, 25, 17, 5, -1, -17, -27, -28, -36, -37, -36, -34, -18, -15, -4, 10, 11,
21, 23, 28, 25, 19, 4, 0, -18, -27, -26, -40, -36, -38, -33, -17, -18, -2, 8,
12, 22, 24, 29, 26, 19, 5, -1, -20, -27, -30, -40, -38, -39, -34, -18, -17, -1,
10, 13, 23, 25, 30, 26, 19, 4, 0, -21, -26, -29, -43, -37, -42, -33, -19, -18,
1, 8, 15, 24, 28, 31, 29, 19, 5, -2, -23, -25, -34, -42, -40, -43, -32, -21,
-16, 2, 9, 18, 24, 30, 32, 30, 18, 5, -3, -23, -25, -36, -43, -41, -44, -33,
-22, -15, 3, 10, 19, 27, 32, 34, 31, 17, 6, -6, -24, -25, -40, -42, -44, -45,
-31, -24, -13, 3, 10, 21, 29, 34, 36, 30, 17, 5, -10, -21, -29, -41, -43, -48,
-44, -33, -25, -10, 1, 14, 23, 32, 38, 38, 31, 17, 3, -13, -23, -34, -42, -47,
-48, -43, -32, -22, -8, 5, 15, 26, 34, 39, 38, 29, 16, 1, -14, -23, -36, -45,
-49, -50, -42, -34, -20, -6, 7, 19, 30, 37, 42, 38, 28, 14, -4, -15, -28, -40,
-46, -52, -49, -43, -31, -18, -3, 10, 22, 33, 40, 44, 37, 26, 10, -6, -19, -32,
-41, -49, -51, -49, -40, -27, -15, 2, 12, 26, 36, 44, 45, 37, 25, 7, -6, -22,
-33, -44, -52, -52, -49, -38, -26, -11, 6, 18, 32, 41, 49, 46, 36, 20, 3, -11,
-27, -37, -48, -53, -52, -47, -33, -22, -4, 10, 22, 35, 44, 51, 45, 34, 16, 2,
-16, -29, -40, -53, -54, -55, -43, -32, -18, 2, 13, 28, 41, 50, 52, 44, 28, 13,
-4, -23, -30, -48, -53, -56, -54, -38, -30, -9, 8, 18, 36, 47, 53, 54, 38, 24,
11, -14, -20, -37, -51, -50, -61, -44, -38, -25, 0, 8, 26, 43, 50, 59, 52, 34,
25, -2, -14, -25, -48, -48, -61, -55, -42, -38, -12, 2, 14, 36, 45, 57, 60, 43,
36, 14, -8, -13, -39, -46, -55, -62, -46, -46, -27, -4, 4, 26, 41, 49, 65, 51,
44, 31, 1, -5, -26, -42, -49, -64, -55, -48, -42, -13, -2, 14, 36, 43, 63, 60,
49, 44, 14, 3, -12, -34, -42, -58, -59, -50, -49, -28, -7, 3, 28, 39, 56, 67,
55, 54, 29, 10, -2, -24, -37, -51, -62, -55, -52, -42, -15, -4, 16, 35, 46, 66,
62, 56, 46, 17, 7, -11, -31, -41, -58, -58, -52, -50, -28, -8, 4, 29, 39, 58,
68, 57, 56, 30, 14, 2, -23, -34, -51, -60, -55, -55, -41, -18, -5, 17, 34, 48,
68, 63, 59, 44, 19, 11, -13, -29, -42, -59, -57, -57, -50, -31, -12, 3, 27, 40,
60, 68, 59, 57, 27, 16, -2, -25, -34, -55, -58, -57, -57, -40, -20, -7, 17, 32,
48, 67, 59, 60, 39, 21, 12, -16, -26, -47, -57, -58, -60, -49, -32, -15, 6, 27,
41, 62, 63, 62, 51, 28, 19, -5, -21, -37, -53, -56, -60, -53, -40, -21, -4, 16,
33, 51, 65, 62, 58, 38, 24, 8, -15, -28, -46, -54, -58, -58, -46, -31, -13, 5,
26, 42, 60, 64, 60, 48, 29, 20, -5, -20, -38, -51, -55, -61, -51, -41, -21, -4,
17, 36, 52, 64, 63, 55, 37, 25, 4, -14, -32, -45, -53, -59, -54, -46, -29, -12,
8, 27, 45, 60, 66, 60, 48, 33, 16, -3, -24, -38, -51, -57, -58, -50, -36, -17,
0, 21, 40, 55, 67, 63, 54, 38, 24, 5, -14, -32, -45, -53, -59, -51, -43, -25,
-6, 12, 34, 49, 63, 68, 58, 46, 33, 13, -4, -25, -39, -49, -58, -54, -49, -35,
-12, 4, 26, 45, 58, 71, 62, 53, 39, 17, 3, -22, -34, -48, -57, -56, -54, -40,
-21, -2, 17, 39, 51, 68, 64, 56, 46, 23, 12, -15, -29, -42, -55, -55, -56, -45,
-28, -8, 10, 33, 45, 62, 66, 56, 53, 29, 18, -6, -25, -36, -54, -55, -59, -51,
-36, -14, 2, 28, 42, 58, 69, 58, 60, 34, 22, 1, -22, -30, -51, -51, -58, -52,
-40, -18, -2, 20, 37, 50, 68, 57, 64, 40, 29, 9, -17, -25, -51, -50, -60, -54,
-45, -24, -7, 16, 34, 46, 66, 56, 64, 43, 32, 14, -12, -21, -46, -49, -58, -57,
-49, -31, -13, 9, 29, 43, 61, 57, 63, 46, 35, 17, -7, -19, -42, -48, -57, -57,
-52, -35, -18, 4, 25, 40, 57, 59, 63, 50, 38, 20, -1, -17, -37, -46, -55, -57,
-52, -38, -20, 1, 22, 39, 56, 62, 64, 54, 41, 24, 4, -14, -32, -43, -51, -53,
-50, -40, -21, -3, 17, 37, 50, 64, 63, 57, 47, 27, 12, -10, -26, -40, -51, -52,
-52, -42, -25, -6, 14, 36, 48, 65, 64, 59, 51, 28, 16, -9, -24, -39, -49, -52,
-51, -43, -28, -8, 8, 33, 43, 62, 64, 59, 54, 30, 19, -6, -22, -36, -50, -52,
-53, -46, -30, -12, 4, 29, 39, 60, 64, 59, 56, 33, 22, -2, -21, -34, -50, -51,
-53, -47, -32, -13, 1, 26, 37, 53, 64, 55, 60, 35, 27, 4, -18, -27, -50, -49,
-56, -49, -38, -16, -2, 25, 38, 51, 68, 53, 63, 34, 28, 4, -17, -24, -48, -45,
-55, -46, -40, -19, -6, 19, 35, 47, 67, 56, 65, 39, 32, 9, -14, -23, -48, -46,
-57, -47, -42, -21, -7, 16, 35, 44, 65, 54, 62, 42, 32, 13, -10, -22, -42, -46,
-56, -50, -46, -26, -9, 12, 34, 44, 64, 59, 60, 47, 30, 14, -8, -22, -41, -45,
-56, -47, -45, -29, -9, 4, 35, 39, 62, 61, 58, 52, 33, 19, -4, -19, -39, -44,
-56, -47, -45, -29, -7, 5, 36, 41, 62, 63, 60, 55, 35, 22, -1, -15, -33, -41,
-50, -45, -41, -27, -5, 5, 35, 41, 61, 66, 59, 59, 37, 27, 5, -12, -27, -38,
-45, -43, -39, -28, -6, 3, 33, 42, 60, 70, 61, 63, 41, 28, 8, -12, -24, -37,
-43, -41, -38, -27, -7, 3, 28, 40, 54, 67, 60, 63, 42, 29, 12, -10, -21, -38,
-43, -44, -40, -28, -9, 1, 24, 38, 50, 66, 57, 62, 42, 29, 15, -11, -18, -38,
-42, -44, -42, -32, -14, -1, 21, 38, 47, 65, 56, 62, 43, 28, 16, -11, -17, -37,
-42, -43, -44, -32, -17, -1, 16, 36, 44, 62, 58, 60, 48, 27, 21, -11, -15, -37,
-42, -43, -46, -32, -20, -1, 14, 36, 42, 62, 57, 61, 49, 27, 23, -10, -12, -35,
-40, -41, -47, -31, -23, -3, 11, 34, 41, 60, 58, 61, 51, 30, 26, -8, -9, -36,
-38, -42, -47, -32, -26, -3, 9, 33, 41, 60, 58, 63, 52, 33, 29, -6, -6, -35,
-35, -42, -47, -31, -27, -3, 7, 32, 39, 59, 58, 65, 53, 36, 30, -3, -3, -33,
-33, -41, -45, -31, -27, -5, 8, 29, 42, 56, 59, 66, 51, 41, 29, 2, -2, -31, -31,
-42, -44, -32, -28, -5, 5, 29, 41, 56, 60, 65, 53, 43, 29, 6, -3, -29, -29, -42,
-41, -34, -26, -7, 5, 28, 40, 55, 59, 65, 52, 45, 30, 9, -1, -26, -28, -41, -41,
-35, -27, -9, 6, 26, 43, 53, 60, 65, 51, 47, 27, 12, -3, -24, -27, -41, -39,
-35, -26, -11, 6, 23, 42, 50, 61, 63, 51, 48, 25, 16, -7, -22, -30, -43, -38,
-39, -26, -13, 5, 22, 41, 47, 62, 58, 51, 46, 21, 18, -15, -17, -36, -41, -40,
-42, -23, -19, 6, 17, 40, 43, 62, 52, 53, 40, 22, 17, -20, -13, -46, -36, -47,
-42, -25, -22, 7, 15, 39, 42, 60, 47, 55, 30, 27, 7, -19, -14, -51, -30, -56,
-34, -31, -19, 5, 14, 38, 40, 59, 43, 56, 23, 32, -2, -13, -20, -50, -29, -61,
-28, -37, -15, 2, 17, 35, 44, 54, 47, 52, 21, 36, -13, -4, -32, -44, -31, -63,
-21, -44, -7, 0, 20, 35, 46, 51, 50, 45, 23, 34, -20, 5, -43, -32, -39, -58,
-19, -47, 1, -4, 25, 33, 48, 46, 54, 36, 31, 24, -19, 8, -54, -17, -55, -43,
-26, -45, 6, -8, 31, 32, 49, 47, 55, 28, 42, 4, -4, -6, -53, -11, -71, -22, -44,
-28, 3, -5, 35, 30, 47, 50, 48, 27, 46, -14, 17, -32, -33, -23, -71, -9, -61,
-6, -10, 5, 34, 32, 47, 55, 35, 41, 30, -12, 22, -55, -6, -54, -45, -21, -59, 8,
-22, 22, 30, 34, 50, 51, 27, 54, 0, 12, -4, -47, 0, -77, -12, -53, -30, -3, -18,
31, 22, 38, 55, 36, 39, 43, -11, 31, -44, -10, -38, -58, -16, -67, -5, -24, 1,
26, 21, 43, 51, 23, 57, 6, 12, 6, -46, 1, -70, -24, -47, -46, -8, -28, 14, 20,
21, 52, 30, 36, 43, -7, 28, -32, -16, -31, -59, -23, -63, -23, -24, -16, 19, 12,
33, 45, 21, 51, 12, 12, 6, -36, -8, -56, -36, -43, -52, -19, -30, -1, 16, 13,
46, 29, 34, 43, 0, 24, -21, -19, -25, -55, -28, -55, -34, -24, -21, 10, 12, 23,
44, 22, 45, 22, 9, 14, -30, -8, -45, -40, -37, -52, -24, -29, -7, 11, 12, 35,
32, 29, 41, 8, 19, -10, -20, -20, -50, -31, -53, -39, -29, -25, 2, 6, 19, 36,
23, 40, 22, 10, 10, -25, -13, -43, -41, -43, -53, -32, -34, -14, 1, 5, 26, 24,
26, 33, 7, 15, -13, -19, -27, -49, -38, -58, -43, -38, -30, -7, -4, 15, 23, 21,
31, 16, 10, 2, -19, -19, -41, -42, -46, -54, -36, -38, -19, -5, 1, 24, 19, 31,
26, 14, 13, -9, -14, -29, -39, -41, -46, -41, -31, -26, -6, 3, 14, 30, 21, 37,
23, 18, 13, -10, -8, -31, -30, -36, -39, -29, -27, -11, 1, 12, 25, 31, 32, 37,
24, 23, 6, -5, -12, -29, -25, -39, -29, -27, -16, 0, 7, 23, 29, 35, 37, 31, 21,
15, -1, -6, -20, -26, -31, -34, -26, -23, -9, -2, 11, 21, 28, 32, 30, 22, 15, 3,
-7, -18, -29, -33, -38, -32, -29, -20, -10, 0, 11, 18, 23, 23, 19, 13, 5, -6,
-16, -27, -35, -40, -41, -37, -30, -21, -9, 1, 10, 16, 18, 16, 11, 3, -7, -17,
-26, -34, -40, -41, -40, -34, -27, -18, -7, 1, 9, 14, 13, 11, 4, -4, -13, -23,
-31, -38, -40, -41, -37, -31, -22, -13, -4, 4, 10, 13, 12, 7, 0, -9, -18, -27,
-34, -39, -41, -39, -33, -26, -16, -8, 0, 8, 10, 11, 7, 1, -6, -14, -22, -29,
-35, -38, -38, -34, -28, -20, -13, -3, 5, 9, 12, 9, 5, -2, -10, -18, -25, -33,
-35, -37, -35, -29, -24, -14, -8, 1, 7, 9, 10, 7, 2, -5, -13, -21, -28, -34,
-34, -35, -30, -25, -18, -9, -3, 5, 7, 10, 7, 3, -2, -9, -17, -23, -30, -33,
-33, -32, -27, -22, -13, -6, 1, 6, 8, 8, 5, 0, -7, -14, -21, -27, -31, -33, -32,
-29, -24, -17, -10, -3, 3, 6, 7, 5, 1, -4, -11, -18, -24, -29, -32, -32, -30,
-26, -20, -14, -6, -1, 3, 5, 4, 2, -3, -8, -15, -21, -26, -31, -32, -31, -28,
-23, -17, -10, -4, 1, 4, 4, 2, -2, -7, -13, -19, -25, -28, -31, -30, -29, -25,
-19, -14, -8, -3, 0, 3, 1, -1, -5, -11, -16, -23, -27, -30, -32, -30, -27, -23,
-16, -11, -6, -1, 0, 1, -1, -4, -9, -14, -20, -24, -28, -30, -30, -28, -24, -19,
-14, -8, -3, -1, 1, -1, -3, -7, -12, -17, -22, -26, -29, -29, -28, -25, -21,
-16, -11, -6, -2, 0, 0, -1, -5, -9, -14, -20, -23, -27, -28, -28, -26, -21, -18,
-12, -7, -4, 0, 0, -1, -3, -8, -11, -16, -21, -24, -27, -27, -25, -23, -18, -14,
-9, -5, -2, 0, 0, -2, -5, -9, -13, -17, -21, -24, -25, -24, -22, -19, -14, -10,
-6, -2, 0, 1, 0, -2, -6, -10, -14, -18, -21, -22, -22, -21, -18, -14, -10, -6,
-2, 0, 2, 2, 0, -3, -7, -10, -14, -17, -19, -20, -20, -17, -14, -11, -6, -3, 1,
2, 3, 2, -1, -3, -7, -11, -14, -17, -18, -18, -17, -14, -11, -7, -3, 0, 2, 3, 2,
1, -2, -5, -9, -12, -15, -17, -17, -16, -15, -12, -8, -5, -2, 1, 3, 2, 2, -1,
-4, -7, -11, -13, -16, -17, -17, -16, -13, -10, -6, -3, -1, 1, 1, 1, -1, -3, -6,
-9, -12, -15, -16, -17, -16, -14, -12, -8, -6, -3, 0, 0, 1, -1, -3, -5, -9, -11,
-14, -15, -17, -16, -15, -13, -10, -8, -4, -2, -1, 0, -1, -2, -5, -7, -10, -13,
-15, -16, -16, -15, -13, -11, -8, -6, -3, -1, 0, 0, -2, -3, -6, -9, -11, -13,
-15, -15, -15, -14, -11, -9, -6, -4, -2, 0, 0, -1, -2, -5, -7, -9, -12, -13,
-15, -14, -13, -12, -9, -7, -4, -2, -1, 0, 0, -1, -3, -5, -8, -10, -12, -13,
-13, -13, -11, -9, -7, -4, -2, 0, 0, 1, 0, -2, -4, -6, -8, -9, -11, -12, -11,
-11, -9, -7, -5, -2, 0, 0, 2, 0, 0, -2, -4, -6, -8, -9, -11, -10, -10, -9, -6,
-5, -2, 0, 1, 2, 2, 1, 0, -2, -4, -6, -7, -8, -9, -8, -7, -6, -4, -2, 0, 2, 2,
3, 2, 2, 0, -2, -3, -6, -6, -7, -7, -6, -5, -3, -1, 0, 2, 3, 4, 4, 3, 2, 0, -2,
-3, -4, -6, -6, -5, -4, -2, -1, 1, 3, 4, 5, 4, 5, 3, 2, 0, -2, -3, -4, -5, -4,
-4, -3, -1, 0, 2, 3, 4, 5, 5, 4, 2, 1, -1, -2, -4, -4, -5, -4, -3, -2, 0, 1, 3,
4, 4, 4, 4, 2, 1, -1, -2, -4, -5, -5, -5, -4, -3, -2, 0, 1, 2, 3, 3, 2, 2, 0,
-1, -3, -4, -5, -6, -6, -6, -4, -3, -2, -1, 1, 1, 2, 2, 1, 0, -1, -3, -4, -5,
-6, -6, -6, -5, -5, -3, -2, 0, 1, 1, 2, 1, 0, -1, -2, -3, -5, -5, -6, -6, -5,
-4, -3, -2, 0, 1, 2, 2, 2, 1, 1, -1, -2, -3, -4, -4, -4, -3, -3, -2, -1, 0, 2,
2, 3, 3, 3, 3, 1, 0, -1, -2, -2, -3, -2, -2, -1, 1, 2, 3, 4, 4, 5, 4, 4, 3, 2,
1, 0, 0, -1, -1, 0, 0, 1, 2, 3, 5, 5, 6, 6, 5, 5, 3, 3, 2, 1, 1, 0, 1, 1, 2, 3,
3, 5, 5, 6, 6, 6, 5, 5, 4, 3, 2, 1, 1, 1, 1, 2, 3, 4, 5, 5, 6, 6, 6, 6, 5, 4, 3,
2, 2, 1, 1, 1, 2, 2, 3, 4, 5, 6, 5, 6, 5, 4, 4, 3, 2, 2, 1, 1, 1, 1, 2, 2, 3, 4,
4, 5, 5, 5, 4, 4, 3, 2, 1, 1, 0, 0, 1, 0, 2, 2, 3, 3, 3, 4, 4, 3, 3, 2, 2, 1, 0,
0, -1, 0, 0, 1, 1, 2, 2, 3, 3, 3, 3, 2, 2, 1, 1, 0, 0, -1, -1, 0, 0, 0, 1, 2, 2,
3, 3, 3, 3, 2, 2, 1, 0, 0, -1, -1, 0, 0, 0, 1, 2, 2, 2, 3, 3, 3, 2, 2, 1, 1, 0,
0, -1, 0, 0, 0, 1, 2, 2, 3, 3, 3, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 2, 2,
3, 3, 3, 3, 2, 2, 1, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 2, 2, 1, 1, 0,
1, 0, 1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3, 3,
3, 3, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1,
1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 1, 1, 1, 2, 2, 2, 2, 3, 2, 2,
2, 2, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1,
1, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 2,
2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3,
3, 3, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3,
3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 4, 4, 4, 4, 4,
4, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 4, 4, 4, 4, 4, 3,
3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3,
3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4,
4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6,
6, 6, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 6, 6, 6, 6, 6,
6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2,
2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* cherry2_H_ */
