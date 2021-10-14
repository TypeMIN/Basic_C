#include <stdio.h>

int main(void)
{
  int num = 0, count = 1;
  int input = 0;
  int sum = 0;
  double avg = 0;

  printf("입력할 정수의 개수 : ");
  scanf("%d", &num);

  while(count <= num)
  {
    printf("정수를 입력해주세요(%d/%d) : ", count++, num);
    scanf("%d", &input);
    sum += input;
  }

  avg = (double)sum / num;
  printf("입력한 정수의 평균 : %f \n", avg);
  return 0;
}