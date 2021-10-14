#include <stdio.h>

int main(void)
{
  const int THREE = 3;
  int num = 0;
  int try = 1;

  printf("정수를 입력해주세요 : ");
  scanf("%d", &num);

  while(num > 0)
  {
    printf("%d ", THREE * try);
    num--;
    try++;
  }
  printf("\n");
  return 0;
}