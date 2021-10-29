#include <stdio.h>

int main(void)
{
  /* 파일 생성 */
  FILE * fp = fopen("text.txt", "wt");
  fputs("123456789", fp);
  fclose(fp);

  /* 파일 개방 */
  fp = fopen("text.txt", "rt");

  /* SEEK_END TEST */
  fseek(fp, -2, SEEK_END);
  putchar(fgetc(fp));

  /* SEEK_SET TEST */
  fseek(fp, 2, SEEK_SET);
  putchar(fgetc(fp));

  /* SEEK_CUR TEST */
  fseek(fp, 2, SEEK_CUR);
  putchar(fgetc(fp));

  fclose(fp);
  return 0;
}