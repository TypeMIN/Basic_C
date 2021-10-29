#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int input = 0, count = 0;
  unsigned int arrsize = 5;
  int * numarr;

  numarr = (int *)calloc(sizeof(int), arrsize);

  while(1)
  {
    printf("정수 입력(종료 : -1) : ");
    scanf("%d", &input);
    if(input == -1)
      break;
    
    numarr[count++] = input;
    if(count == (int)arrsize)
    {
      arrsize += 3;
      numarr = realloc(numarr, sizeof(int)*(arrsize));
    }
  }

  for(int i = 0; i < count; i++)
  {
    printf("%d ", numarr[i]);
  }
  printf("\n");
  free(numarr);
  return 0;
}