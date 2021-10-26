#include <stdio.h>
#include <string.h>

struct employee
{
  char name[20];
  char ID[20];
  int salary;
} employee1;

int main(void)
{
  fputs("종업원의 이름 : ", stdout);
  fgets(employee1.name, sizeof(employee1.name), stdin);
  employee1.name[strlen(employee1.name)-1] = 0;

  fputs("주민등록번호 : ", stdout);
  fgets(employee1.ID, sizeof(employee1.ID), stdin);
  employee1.ID[strlen(employee1.ID)-1] = 0;

  printf("급여정보 : ");
  scanf("%d", &employee1.salary);

  printf("이름 : %s \n", employee1.name);
  printf("주민등록번호 : %s \n", employee1.ID);
  printf("급여정보 : %d만원 \n", employee1.salary);
  return 0;
}