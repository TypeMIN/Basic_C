#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  int age1;
  int age2;
  int namelen1 = 0;
  int namelen2 = 0;
  char str1[20];
  char str2[20];

  fputs("(1) 이름 나이 : ", stdout);
  fgets(str1, 20, stdin);

  fputs("(2) 이름 나이 : ", stdout);
  fgets(str2, 20, stdin);

  while(str1[namelen1] != 32)
    namelen1++;

  while(str2[namelen2] != 32)
    namelen2++;

  if(namelen1 == namelen2)
  {
    if(!strncmp(str1, str2, namelen1))
      puts("두 사람의 이름이 같습니다.");
    else  
      puts("두 사람의 이름은 다릅니다.");
  }
  else
    puts("두 사람의 이름은 다릅니다.");

  age1 = atoi(&str1[namelen1+1]);
  age2 = atoi(&str2[namelen2+1]);

  if(age1 == age2)
    puts("두 사람의 나이가 같습니다.");
  else
    puts("두 사람의 나이는 다릅니다.");

  return 0;
}