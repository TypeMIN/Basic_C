#include <stdio.h>

int main(void)
{
  int try = 1;
  int sum = 0;
  int input = 0;

  while(try <= 5)
  {
    printf("양의 정수를 입력해주세요(%d/%d) : ", try, 5);
    scanf("%d", &input);

    while(input < 1)
    {
      printf("1보다 작은 정수를 입력하였습니다. 다시 입력해주세요(%d/%d) : ", try, 5);
      scanf("%d", &input);
    }

    sum += input;
    try++;
  }

  printf("모든 정수의 합 : %d \n", sum);
  return 0;
}