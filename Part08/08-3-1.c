#include <stdio.h>

int main(void)
{
  int n;

  printf("자연수를 입력해주세요 : ");
  scanf("%d", &n);

  switch(n/10)
  {
    case 0:
      printf("0이상 10미만 \n");
      break;
    case 1:
      printf("10이상 20미만 \n");
      break;
    case 2:
      printf("20이상 30미만 \n");
      break;
    case 3:
      printf("30이상 \n");
      break;
  }

  return 0;
}