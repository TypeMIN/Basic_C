#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  int sum = 0;
  char input[100];

  fputs("문자열을 입력해주세요 : ", stdout);
  fgets(input, 100, stdin);

  for(int i = 0; input[i] != '\n'; i++)
  {
    if(48 <= input[i] && input[i] <= 57)
    {
      sum += input[i] - 48;
    }
  }

  printf("%d \n", sum);
  return 0;
}