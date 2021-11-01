#include <stdio.h>

int main(int argc, char * argv[])
{
  int A_word = 0, P_word = 0;
  char word[30];
  FILE * fp = fopen(argv[1], "rt");

  while(fscanf(fp, "%s", word) != EOF)
  {
    if(word[0] == 'A')
      A_word++;
    else if(word[0] == 'P')
      P_word++;
  }

  printf("A로 시작하는 단어의 수 : %d \n", A_word);
  printf("P로 시작하는 단어의 수 : %d \n", P_word);
  fclose(fp);
  return 0;
}