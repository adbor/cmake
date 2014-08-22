// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <os.h>

int main (int argc, char *argv[])
{
  printf("Best system Win(%d)/Linux(%d)/Mac(%d)\r\n", DoWindowsBestOS(), DoLinuxBestOS(),DoMacBestOS());
  return 0;
}