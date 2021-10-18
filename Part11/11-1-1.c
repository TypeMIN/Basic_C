#include <stdio.h>

int main(void)
{
  int max, min, sum;
  int numArray[5];

  for(int i = 0; i < 5; i++)
  {
    printf("정수를 입력해주세요(%d/%d) : ", i + 1, 5);
    scanf("%d", &numArray[i]);
  }

  max = numArray[0];
  min = numArray[0];
  sum = 0;

  for(int i = 1; i < 5; i++)
  {
    if(numArray[i] > max)
      max = numArray[i];
    if(numArray[i] < min)
      min = numArray[i];
    sum += numArray[i];
  }

  printf("입력된 정수 중 최댓값 : %d \n", max);
  printf("입력된 정수 중 최솟값 : %d \n", min);
  printf("입력된 정수의 총 합 : %d \n", sum);
  return 0;
}