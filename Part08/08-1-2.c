#include <stdio.h>

int main(void)
{
  int num1, num2;
  int dif = 0;

  printf("두 개의 정수를 입력해주세요 : ");
  scanf("%d %d", &num1, &num2);

  dif = num1 > num2 ? num1 - num2 : num2 - num1;
  
  /*
  if(num1 > num2)
    dif = num1 - num2;
  else
    dif = num2 - num1;
  */

  printf("두 수의 차 : %d \n", dif);
  return 0;
}