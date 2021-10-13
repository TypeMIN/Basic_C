#include <stdio.h>

int main(void)
{
  int num;

  printf("정수를 입력해주세요 : ");
  scanf("%d", &num);

  num = ~num;
  num += 1;

  printf("부호를 바꾼 결과 : %d \n", num);
  return 0;
}