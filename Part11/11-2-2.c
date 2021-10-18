#include <stdio.h>

int main(void)
{
  int strlen = 0;
  char temp;
  char str[100];

  printf("영단어를 입력해주세요 : ");
  scanf("%s", str);

  while(str[strlen] != '\0')
    strlen++;

  for(int i = 0; i < strlen / 2; i++)
  {
    temp = str[i];
    str[i] = str[strlen - i - 1];
    str[strlen - i - 1] = temp;
  }

  printf("%s \n", str);
  return 0;
}