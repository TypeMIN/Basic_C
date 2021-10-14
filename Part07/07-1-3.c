#include <stdio.h>

int main(void)
{
  int input = -1;
  int sum = 0;

  printf("정수를 입력해주세요(종료 : 0) : ");
  while(input != 0)
  {
    scanf("%d", &input);
    sum += input;
  }
  printf("모든 정수의 합 : %d \n", sum);
  return 0;
}