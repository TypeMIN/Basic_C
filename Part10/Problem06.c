#include <stdio.h>

void ConvertTime(int);

int main(void)
{
  int seconds;

  printf("초(second) 입력 : ");
  scanf("%d", &seconds);

  ConvertTime(seconds);
  return 0;
}

void ConvertTime(int seconds)
{
  int hour = 0, minute = 0, second = 0;
  if(seconds > 59)
  {
    minute = seconds / 60;
    second = seconds % 60;
  }

  if(minute > 59)
  {
    hour = minute / 60;
    minute %= 60;
  }

  printf("[h:%d, m:%d, s:%d] \n", hour, minute, second);
  return;
}