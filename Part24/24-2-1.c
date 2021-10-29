#include <stdio.h>
#include <string.h>

long GetFileSize(FILE * fp);

int main(void)
{
  char str[50];
  FILE * fp = fopen("24-2-1.txt", "rt");
  fgets(str, 50, fp);
  fputs(str, stdout);
  printf("파일의 크기 : %ld \n", GetFileSize(fp));
  fgets(str, 50, fp);
  fputs(str, stdout);
  printf("파일의 크기 : %ld \n", GetFileSize(fp));
  fgets(str, 50, fp);
  fputs(str, stdout);
  printf("파일의 크기 : %ld \n", GetFileSize(fp));
  return 0;
}

long GetFileSize(FILE * fp)
{
  long fpos;
  long fsize;
  fpos = ftell(fp);     // 파일 위치 지시자 정보 백업

  fseek(fp, 0, SEEK_END);
  fsize = ftell(fp);
  fseek(fp, fpos, SEEK_SET);    // 파일 위치 지시자 정보 복구
  return fsize;
}