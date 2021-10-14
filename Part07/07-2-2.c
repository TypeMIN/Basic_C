#include <stdio.h>

int main(void)
{
  int num_col = 5;
  int num_o = 0;
  int temp = 0;

  while(num_col-- > 0)
  {
    temp = num_o++;
    while(temp-- > 0)
      printf("o ");
    printf("* \n");
  }
  return 0;
}