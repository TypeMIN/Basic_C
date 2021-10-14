#include <stdio.h>

int main(void)
{
  printf("%-10s %18s %7s \n", "이  름", "전공학과", "학년");
  printf("%-10s %18s %7d \n", "김동수", "전자공학", 3);
  printf("%-10s %18s %7d \n", "이을수", "컴퓨터공학", 2);
  printf("%-10s %18s %7d \n", "한선영", "미술교육학", 4);
  return 0;
}