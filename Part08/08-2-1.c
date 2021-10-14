#include <stdio.h>

int main(void)
{
  for(int j = 2; j < 10; j++)
  {
    if(j % 2 != 0)
      continue;
    else
    {
      for(int i = 1; i < 10; i++)
      {
        printf("%d * %d = %d \n", j, i, j * i);
        if(i == j)
          break;
      }
    }
  }
  return 0;
}