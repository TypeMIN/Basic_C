#include <stdio.h>

int main(void)
{
  char grade;
  int input;
  int sum = 0;
  double avg = 0;

  for(int i = 0; i < 3; i++)
  {
    printf("성적을 입력해주세요(%d/3) : ", i+1);
    scanf("%d", &input);
    sum += input;
  }

  avg = (double)sum / 3;

  if(avg >= 90)
    grade = 'A';
  else if(avg >= 80)
    grade = 'B';
  else if(avg >= 70)
    grade = 'C';
  else if(avg >= 50)
    grade = 'D';
  else
    grade = 'F';

  printf("학점은 %c입니다. \n", grade);
  return 0;
}