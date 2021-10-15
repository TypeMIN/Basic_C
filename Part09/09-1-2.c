#include <stdio.h>

void CelToFah(void);
void FahToCel(void);

int main(void)
{
  int isFinish = 1;
  while(isFinish)
  {
    int option = 0;
    printf("메뉴를 선택해주세요(1. 섭씨 -> 화씨, 2. 화씨 -> 섭씨, 0. 프로그램 종료) : ");
    scanf("%d", &option);

    switch(option)
    {
      case 1:
        CelToFah();
        break;
      case 2:
        FahToCel();
        break;
      case 0:
        isFinish = 0;
        break;
      default:
        break;
    }
  }
  return 0;
}

void CelToFah(void)
{
  double cel, fah;
  printf("섭씨 온도를 입력해주세요 : ");
  scanf("%lf", &cel);

  fah = 1.8 * cel + 32;
  printf("입력하신 온도의 화씨 온도는 %f도 입니다.\n", fah);
  return;
}

void FahToCel(void)
{
  double cel, fah;
  printf("화씨 온도를 입력해주세요 : ");
  scanf("%lf", &fah);

  cel = (fah - 32) / 1.8;
  printf("입력하신 온도의 섭씨 온도는 %f도 입니다.\n", cel);
  return;
}