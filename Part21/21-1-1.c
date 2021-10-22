#include <stdio.h>

int main(void)
{
  int input;

  input = getchar();
  if(65 <= input && input <= 90)
  {
    input += 32;
    putchar(input);
  }
  else if(97 <= input && input <= 122)
  {
    input -= 32;
    putchar(input);
  }
  else
  {
    printf("알파벳을 입력하지 않았습니다!");
  }
  printf("\n");
  return 0;
}