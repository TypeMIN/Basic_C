#include <stdio.h>

void ShowEven(int*);
void ShowOdd(int*);

int main(void)
{
  int arr[10];

  for(int i = 0; i < 10; i++)
  {
    printf("입력 : ");
    scanf("%d", &arr[i]);
    
  }

  ShowOdd(arr);
  ShowEven(arr);
  return 0;
}

void ShowEven(int* arr)
{
  printf("짝수 출력 : ");
  for(int i = 0; i < 10; i++)
    if((arr[i] % 2) == 0)
      printf("%d ", arr[i]);
  printf("\n");
  return;
}

void ShowOdd(int* arr)
{
  printf("홀수 출력 : ");
  for(int i = 0; i < 10; i++)
    if((arr[i] % 2) == 1)
      printf("%d ", arr[i]);
  printf("\n");
  return;
}