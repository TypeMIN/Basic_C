#include <stdio.h>

int main(void)
{
  int index;
  int max = 0;
  char str[100];

  printf("영단어를 입력해주세요 : ");
  scanf("%s", str);

  while(str[index] != 0)
  {
    if((int)str[index] > max)
      max = (int)str[index];
    index++;
  }
  printf("%c \n", max);
  return 0;
}