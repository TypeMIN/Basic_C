#include <stdio.h>

int main(void)
{
  char num;

  printf("원하는 문자의 아스키 코드 값을 입력해주세요 : ");
  scanf("%d", &num);

  printf("입력한 문자 : %c \n", num);
  return 0;
}