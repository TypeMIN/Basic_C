#include <stdio.h>

void convert(int, int*);

int main(void)
{
  int input;
  int arr[100];

  printf("정수를 입력해주세요 : ");
  scanf("%d", &input);

  convert(input, arr);
  return 0;
}

void convert(int num, int* arr)
{
  int count = 0;
  while(num > 1)
  {
    arr[count++] = num % 2;
    num /= 2;
  }
  for(int i = count; i >= 0; i--)
  {
    printf("%d", arr[i]);
  }
  printf("\n");
  return;
}