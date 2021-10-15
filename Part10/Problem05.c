#include <stdio.h>

int isPrime(int);

int main(void)
{
  int target = 1;
  int count = 0;

  while(count < 10)
  {
    if(isPrime(target))
    {
      printf("%d ", target);
      count++;
    }
    target++;
  }
  printf("\n");
  return 0;
}

int isPrime(int num)
{
  if(num <= 1)
    return 0;

  for(int i = 2; i <= num / 2; i++)
  {
    if(num % i == 0)
      return 0;
  }
  return 1;
}