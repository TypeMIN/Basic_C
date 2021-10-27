#include <stdio.h>

typedef struct point
{
  int xpos;
  int ypos;
} Point;

typedef struct rectangle
{
  Point pos1;
  Point pos2;
} Rectangle;

void AreaOfRectangle(Rectangle rec)
{
  int area = 0;
  area = (rec.pos2.xpos - rec.pos1.xpos) * (rec.pos2.ypos - rec.pos1.ypos);
  printf("%d \n", area);
}

void ShowPoint(Rectangle rec)
{
  printf("[%d, %d], [%d, %d], [%d, %d], [%d, %d] \n", rec.pos1.xpos, rec.pos1.ypos, rec.pos2.xpos, rec.pos1.ypos, rec.pos1.xpos, rec.pos2.ypos, rec.pos2.xpos, rec.pos2.ypos);
}

int main(void)
{
  Rectangle rec = {0, 0, 100, 100};

  AreaOfRectangle(rec);
  ShowPoint(rec);
  return 0;
}