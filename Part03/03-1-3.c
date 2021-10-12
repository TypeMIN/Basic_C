#include <stdio.h>

int main(void)
{
  int num;
  int pow;

  printf("정수를 입력해주세요 : ");
  scanf("%d", &num);

  pow = num * num;

  printf("%d\n", pow);
  return 0;
}