#include <stdio.h>

int main(void)
{
  int num = 3;

  num = num<<3;
  num = num>>2;

  printf("3 * 8 / 4 = %d \n", num);
  return 0;
}