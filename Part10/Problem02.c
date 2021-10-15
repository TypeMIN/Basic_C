#include <stdio.h>

void MakeGugudan(int, int);

int main(void)
{
  int num1, num2;
  printf("구구단의 범위를 지정할 두 정수를 입력해주세요 : ");
  scanf("%d %d", &num1, &num2);

  MakeGugudan(num1, num2);
  return 0;
}

void MakeGugudan(int num1, int num2)
{
  if(num1 > num2)
  {
    int temp = num1;
    num1 = num2;
    num2 = temp;
  }

  for(; num1 <= num2; num1++)
  {
    for(int i = 1; i < 10; i++)
    {
      printf("%d * %d = %d \n", num1, i, num1 * i);
    }
  }
  return;
}