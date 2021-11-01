#include <stdio.h>
#define SUM(X, Y, Z) ((X)+(Y)+(Z))
#define MUL(X, Y, Z) ((X)*(Y)*(Z))

int main(void)
{
  printf("3 + 4 + 5 = %d \n", SUM(3, 4, 5));
  printf("3 * 4 * 5 = %d \n", MUL(3, 4, 5));
  return 0;
}