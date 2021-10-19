#include <stdio.h>
#include <string.h>

int isPalindrome(char*);

int main(void)
{
  char str[100];
  
  printf("문자열 입력 : ");
  scanf("%s", str);

  if(isPalindrome(str))
    printf("회문 입니다. \n");
  else
    printf("회문이 아닙니다. \n");

  return 0;
}

int isPalindrome(char* str)
{
  int len = strlen(str);
  for(int i = 0; i < len / 2; i++)
  {
    if(str[i] != str[len - i - 1])
      return 0;
  }
  return 1;
}