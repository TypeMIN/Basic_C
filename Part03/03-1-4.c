#include <stdio.h>

int main(void)
{
  int num1, num2;
  int div, remain;

  printf("두 개의 정수를 입력해주세요 : ");
  scanf("%d %d", &num1, &num2);

  div = num1 / num2;
  remain = num1 % num2;

  printf("몫 : %d \n", div);
  printf("나머지 : %d \n", remain);
  return 0;
}