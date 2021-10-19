#include <stdio.h>

void Swap3(int*, int*, int*);

int main(void)
{
  int num1 = 10, num2 = 20, num3 = 30;

  printf("num1 : %d, num2 : %d, num3 : %d \n", num1, num2, num3);
  Swap3(&num1, &num2, &num3);
  printf("num1 : %d, num2 : %d, num3 : %d \n", num1, num2 ,num3);
  return 0;
}

void Swap3(int* pnum1, int* pnum2, int* pnum3)
{
  int temp;
  temp = *pnum1;
  *pnum1 = *pnum3;
  *pnum3 = *pnum2;
  *pnum2 = temp;
  return;
}