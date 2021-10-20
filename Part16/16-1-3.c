#include <stdio.h>

int main(void)
{
  int sum;
  char* name[4] = {"철희", "철수", "영희", "영수"};
  char* subject[4] = {"국어", "영어", "수학", "국사"};
  int score[5][5];
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      printf("%s의 %s성적 : ", name[i], subject[j]);
      scanf("%d", &score[i][j]);
    }
  }

  for(int i = 0; i < 4; i++)
  {
    sum = 0;
    for(int j = 0; j < 4; j++)
    {
      sum += score[i][j];
    }
    score[i][4] = sum;
  }

  for(int i = 0; i < 5; i++)
  {
    sum = 0;
    for(int j = 0; j < 4; j++)
    {
      sum += score[j][i];
    }
    score[4][i] = sum;
  }

  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      printf("%3d ", score[i][j]);
    }
    printf("\n");
  } 
  return 0;
}