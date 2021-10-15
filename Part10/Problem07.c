#include <stdio.h>

int main(void)
{
  int n;
  int count;
  
  printf("상수 n 입력 : ");
  scanf("%d", &n);

  while(n > 1)
  {
    n /= 2;
    count++;
  }

  printf("공식을 만족하는 k의 최댓값은 %d \n", count);
  return 0;
}