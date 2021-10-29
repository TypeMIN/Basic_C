#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char * str;
  unsigned int maxlen;
  printf("입력할 문자열의 길이를 입력 : ");
  scanf("%u", &maxlen);
  while(getchar() != '\n');

  str = (char *)malloc(sizeof(char)*(maxlen+1));

  printf("문자열 입력 : ");
  fgets(str, maxlen+1, stdin);
  str[strlen(str)-1] = 0;   // \n의 삭제

  for(int i = strlen(str); i > 0; i--)
  {
    if(str[i] == ' ')
    {
      printf("%s ", &str[i+1]);
      str[i] = 0;
    }
  }
  printf("%s \n", &str[0]);
  free(str);
  return 0;
}