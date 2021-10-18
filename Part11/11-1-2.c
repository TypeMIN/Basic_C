#include <stdio.h>

int main(void)
{
  char goodtime[] = {"\"Good time\""};

  for(int i = 0; i < 11; i++)
  {
    printf("%c", goodtime[i]);
  }
  printf("\n");
  return 0;
}