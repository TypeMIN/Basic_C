#include <stdio.h>

typedef struct point
{
  int xpos;
  int ypos;
} Point;

void SwapPosition(Point * ptr1, Point * ptr2)
{
  int temp;

  temp = ptr1->xpos;
  ptr1->xpos = ptr2->xpos;
  ptr2->xpos = temp;

  temp = ptr1->ypos;
  ptr1->ypos = ptr2->ypos;
  ptr2->ypos = temp;
}

void ShowPosition(Point pos)
{
  printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main(void)
{
  Point pos1 = {2, 4};
  Point pos2 = {5, 7};

  SwapPosition(&pos1, &pos2);
  ShowPosition(pos1);
  ShowPosition(pos2);
  return 0;
}