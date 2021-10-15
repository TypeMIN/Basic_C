#include <stdio.h>

int main(void)
{
  int num;
  printf("정수를 입력해주세요 : ");
  scanf("%d", &num);
  printf("입력하신 수는 : %X \n", num);
  return 0;
}