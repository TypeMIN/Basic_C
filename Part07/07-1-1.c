#include <stdio.h>

int main(void)
{
  int num = 0;

  printf("정수를 입력해주세요 : ");
  scanf("%d", &num);

  while(num > 0)
  {
    printf("Hello world! \n");
    num--;
  }
  return 0;
}