#include <stdio.h>

int main(void)
{
  const int BREAD_COST = 500;
  const int SNACK_COST = 700;
  const int DRINK_COST = 400;

  int money = 3500;
  int spent = 0;

  printf("현재 당신이 소유하고 있는 금액 : %d \n", money);

  for(int i = 1; i < money / BREAD_COST; i++)
  {
    for(int j = 1; j < money / SNACK_COST; j++)
    {
      for(int k = 1; k < money / DRINK_COST; k++)
      {
        spent = 0;
        spent = BREAD_COST * i + SNACK_COST * j + DRINK_COST * k;
        if(money == spent)
          printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", i, j, k);
      }
    }
  }

  printf("어떻게 구입하시겠습니까? \n");
  return 0;
}