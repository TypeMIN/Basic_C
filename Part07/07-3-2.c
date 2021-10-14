#include <stdio.h>

int main(void)
{
  int num = 0;
  int sum = 0;

  do
  {
    sum += num;
    num += 2;
  } while(num < 101);
  
  printf("0부터 100까지 짝수의 합 : %d \n", sum);
  return 0;
}