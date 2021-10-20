#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int ROCK = 1;
const int SCISSORS = 2;
const int PAPER = 3;

int main(void)
{
  int win = 0, draw = 0;
  int isLose = 0;
  int user;
  int computer;
  while(isLose == 0)
  {
    srand((int)time(NULL));

    printf("바위는 %d, 가위는 %d, 보는 %d : ", ROCK, SCISSORS, PAPER);
    scanf("%d", &user);

    computer = (rand()%3)+1;
    if(user == 1)
    {
      printf("당신은 바위 선택, ");
      if(computer == 1)
      {
        printf("컴퓨터는 바위 선택, ");
        draw++;
        printf("비겼습니다!");
      }
      else if(computer == 2)
      {
        printf("컴퓨터는 가위 선택, ");
        win++;
        printf("이겼습니다!");
      }
      else
      {
        printf("컴퓨터는 보 선택, ");
        isLose = 1;
        printf("졌습니다!");
      }
    }
    else if(user == 2)
    {
      printf("당신은 가위 선택, ");
      if(computer == 1)
      {
        printf("컴퓨터는 바위 선택, ");
        isLose = 1;
        printf("졌습니다!");
      }
      else if(computer == 2)
      {
        printf("컴퓨터는 가위 선택, ");
        draw++;
        printf("비겼습니다!");
      }
      else
      {
        printf("컴퓨터는 보 선택, ");
        win++;
        printf("이겼습니다!");
      }
    }
    else if(user == 3)
    {
      printf("당신은 보 선택, ");
      if(computer == 1)
      {
        printf("컴퓨터는 바위 선택, ");
        win++;
        printf("졌습니다!");
      }
      else if(computer == 2)
      {
        printf("컴퓨터는 가위 선택, ");
        win++;
        printf("이겼습니다!");
      }
      else
      {
        printf("컴퓨터는 보 선택, ");
        draw++;
        printf("비겼습니다!");
      }
    }
    else
      continue;
    printf("\n");
  }
  printf("%d승 %d무 \n", win, draw);
  return 0;
}