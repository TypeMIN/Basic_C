#include <stdio.h>

int PowerTwo(int);

int main(void)
{
  int num;

  printf("정수 입력 : ");
  scanf("%d", &num);
  printf("2의 %d승은 %d \n", num, PowerTwo(num));
  return 0;
}

int PowerTwo(int num)
{
  if(num == 0)
    return 1;
  else
    return 2 * PowerTwo(num - 1);
}