#include <stdio.h>

int MaxOfThree(int, int, int);
int MinOfThree(int, int, int);

int main(void)
{
  int num1, num2, num3;
  printf("세 개의 정수를 입력해주세요 : ");
  scanf("%d %d %d", &num1, &num2, &num3);

  printf("세 정수 중 최댓값 : %d \n", MaxOfThree(num1, num2, num3));
  printf("세 정수 중 최솟값 : %d \n", MinOfThree(num1, num2, num3));
  return 0;
}

int MaxOfThree(int num1, int num2, int num3)
{
  if(num1 > num2)
  {
    if(num1 > num3)
      return num1;
    else
      return num3;
  }
  else
  {
    if(num2 > num3)
      return num2;
    else
      return num3;
  }
}

int MinOfThree(int num1, int num2, int num3)
{
  if(num1 < num2)
  {
    if(num1 < num3)
      return num1;
    else
      return num3;
  }
  else
  {
    if(num2 < num3)
      return num2;
    else
      return num3;
  }
}