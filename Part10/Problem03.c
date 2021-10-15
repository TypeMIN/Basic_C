#include <stdio.h>

int EuclideanAlgorithm(int, int);

int main(void)
{
  int num1, num2;
  int gcd;

  printf("두 개의 정수를 입력해주세요 : ");
  scanf("%d %d", &num1, &num2);

  gcd = EuclideanAlgorithm(num1, num2);

  printf("두 수의 최소공약수 : %d \n", gcd);
  return 0;
}

int EuclideanAlgorithm(int a, int b)
{
  static int gcb = 0;
  int q = 1, r;

  if(a < b)
  {
    int temp = a;
    a = b;
    b = temp;
  }

  while(b * q < a - b)
    q++;

  r = a - b * q;
  if(r == 0)
    gcb = b;
  else
    EuclideanAlgorithm(b, r);

  return gcb;
}