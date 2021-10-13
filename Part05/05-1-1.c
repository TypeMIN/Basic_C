#include <stdio.h>

int main(void)
{
  int x1, x2, y1, y2;
  int a, b, area;

  printf("좌 하단의 좌표를 입력해주세요 (x, y) : ");
  scanf("%d %d", &x1, &y1);
  printf("우 상단의 좌표를 입력해주세요 (x, y) : ");
  scanf("%d %d", &x2, &y2);

  a = x2 - x1;
  b = y2 - y1;
  area = a * b;

  printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", area);
  return 0;
}