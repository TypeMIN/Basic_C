#include <stdio.h>

int main(void)
{
  int num1, num2;
  int dif, mul;

  printf("두 개의 정수를 입력해주세요 : ");
  scanf("%d %d", &num1, &num2);

  dif = num1 - num2;
  mul = num1 * num2;

  printf("두 수의 차는 %d입니다. \n", dif);
  printf("두 수의 곱은 %d입니다. \n", mul);
  return 0;
}