#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[20];
  char str2[20];
  char str3[20];

  fputs("문자열1 입력 : ", stdout);
  fgets(str1, 20, stdin);
  str1[strlen(str1)-1] = 0;
  fputs("문자열2 입력 : ", stdout);
  fgets(str2, 20, stdin);
  str2[strlen(str2)-1] = 0;

  strcpy(str3, str1);
  strcat(str3, str2);

  puts(str3);
  return 0;
}