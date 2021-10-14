#include <stdio.h>

int main(void)
{
  int az, za;

  for(int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      az = 10 * i + j;
      za = 10 * j + i;
      if(az + za == 99)
        printf("A = %d, Z = %d \n", i, j);
    }
  }

  return 0;
}