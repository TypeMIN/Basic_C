#include <stdio.h>

int main(void)
{
  int arr[5] = {1, 2, 3, 4, 5};
  int* ptr = arr;

  for(int i = 0; i < 5; i++)
    *(ptr+i) += 2;

  printf("%d %d %d %d %d \n", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
  return 0;
}