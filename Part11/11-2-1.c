#include <stdio.h>

int main(void)
{
  int strlength = 0, index = 0;
  char str[100];

  printf("단어를 입력해주세요 : ");
  scanf("%s", str);

  while(str[index] != '\0')
  {
    strlength++;
    index++;
  }

  printf("%d \n", strlength);
  return 0;
}