#include <stdio.h>

int main(void)
{
  double num1, num2;

  printf("두 개의 실수를 입력해주세요 : ");
  scanf("%lf %lf", &num1, &num2);

  printf("두 수의 합 : %f \n", num1+num2);
  printf("두 수의 차 : %f \n", num1-num2);
  printf("두 수의 곱 : %f \n", num1*num2);
  printf("두 수의 몫 : %f \n", num1/num2);
  return 0;
}