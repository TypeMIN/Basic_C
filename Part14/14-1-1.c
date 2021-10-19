#include <stdio.h>

int SquareByValue(int);
void SquareByReference(int*);

int main(void)
{
  int input, square1, square2;

  printf("정수를 입력해주세요 : ");
  scanf("%d", &input);

  square1 = SquareByValue(input);
  SquareByReference(&input);

  printf("%d %d \n", square1, input);
  return 0;

}

int SquareByValue(int num)
{
  int square;

  square = num * num;
  return square;
}

void SquareByReference(int* pnum)
{
  (*pnum) *= (*pnum);
  return;
}