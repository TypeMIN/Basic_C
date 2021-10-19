#include <stdio.h>

int main(void)
{
  int input;
  int arr[10];
  int* arrfront = &arr[0];
  int* arrback = &arr[9];

  for(int i = 0; i < 10; i++)
  {
    printf("입력 : ");
    scanf("%d", &input);

    if((input % 2) == 0)
    {
      *arrback = input;
      arrback--;
    }
    else
    {
      *arrfront = input;
      arrfront++;
    }
  }

  printf("배열 요소의 출력 : %d %d %d %d %d %d %d %d %d %d \n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
  return 0;
}