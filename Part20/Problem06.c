#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int answer[3];
  int input[3];
  int try = 1;
  int strike = 0, ball = 0;

  srand((int)time(NULL));
  answer[0] = rand()%10;
  do
  {
    answer[1] = rand()%10;
  } while (answer[0] == answer[1]);
  do
  {
    answer[2] = rand()%10;
  } while (answer[0] == answer[2] && answer[1] == answer[2]);
  
  printf("Start Game! \n");
  while(strike != 3)
  {
    strike = 0, ball = 0;
    printf("3개의 숫자 선택 : ");
    scanf("%d %d %d", &input[0], &input[1], &input[2]);

    for(int i = 0; i < 3; i++)
    {
      for(int j = 0; j < 3; j++)
      {
        if(input[i] == answer[j])
        {
          if(i == j)
            strike++;
          else
            ball++;
        }
      }
    }

    printf("%d번째 도전 결과 : %dstrike, %dball!! \n", try++, strike, ball);
  }
  printf("\nGame Over! \n");
  return 0;
}