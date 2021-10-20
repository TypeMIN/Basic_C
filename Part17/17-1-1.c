#include <stdio.h>

void MaxAndMin(int*, int**, int**);

int main(void)
{
  int* maxPtr;
  int* minPtr;
  int arr[5];

  for(int i = 0; i < 5; i++)
  {
    printf("정수 입력(%d/5) : ", i+1);
    scanf("%d", &arr[i]);
  }

  MaxAndMin(arr, &maxPtr, &minPtr);

  printf("최댓값 : %d \n", *maxPtr);
  printf("최솟값 : %d \n", *minPtr);
  return 0;
}

void MaxAndMin(int* arr, int** max, int** min)
{
  *max = &arr[0];
  *min = &arr[0];

  for(int i = 1; i < 5; i++)
  {
    if(**max < arr[i])
    {
      *max = &arr[i];
    }
    if(**min > arr[i])
    {
      *min = &arr[i];
    }
  }
  return;
}