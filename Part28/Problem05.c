#include <stdio.h>

int isSameTxt(FILE * f1, FILE * f2)
{
  while(!feof(f1))
  {
    if(feof(f2))    // f2가 더 짧은 경우
      return 0;

    if(fgetc(f1) == fgetc(f2))
    {
      if(feof(f1) && feof(f2))    // f1 == f2
        return 1;
    }
  }
  return 0;
}

int main(int argc, char * argv[])
{
  FILE * fp1 = fopen(argv[1], "rt");
  FILE * fp2 = fopen(argv[2], "rt");

  if(isSameTxt(fp1, fp2))
  {
    printf("두 개의 파일은 완전히 일치 합니다. \n");
  }
  else
  {
    printf("두 개의 파일은 일치하지 않습니다. \n");
  }
}