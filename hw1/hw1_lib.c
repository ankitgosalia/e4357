/* 
 * File: hw1_lib.c
 * gcc -c hw1_lib.c -o hw1_lib.o
 * gcc -S hw1_lib.c -o hw1_lib.s
 * objdump -D hw1_lib.o
 */
#include "hw1_lib.h"

uint16_t gray_to_binary(uint16_t gray)
{
  uint16_t bin = gray;
  while ((gray = gray >> 1) != 0) {
    bin = bin ^ gray;
  }
  return bin;
}

uint16_t binary_to_gray(uint16_t binary)
{
  uint16_t gray = (binary >> 1) ^ binary;
  return gray;
}


