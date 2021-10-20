#include <stdio.h>

void makeSnailArray(int num)
{
  int i = 0, j = 0;
  int count = 1;
  int isRight = 1, isLeft = 0, isUp = 0, isDown = 0;
  int arr[num][num];
  for(int k = 0; k < num; k++)
  {
    for(int l = 0; l < num; l++)
    {
      arr[k][l] = 0;
    }
  }

  while(count <= num * num)
  {
    if(isRight == 1)
    {
      arr[i][j++] = count++;
      if(j == num-1)
      {
        isRight = 0;
        isDown = 1;
      }
      if(arr[i][j] != 0)
      {
        isRight = 0;
        isDown = 1;
        i++;
        j--;
      }
    }
    else if(isDown == 1)
    {
      arr[i++][j] = count++;
      if(i == num-1)
      {
        isDown = 0;
        isLeft = 1;
      }
      if(arr[i][j] != 0)
      {
        isDown = 0;
        isLeft = 1;
        i--;
        j--;
      }
    }
    else if(isLeft == 1)
    {
      arr[i][j--] = count++;
      if(j == 0)
      {
        isLeft = 0;
        isUp = 1;
      }
      if(arr[i][j] != 0)
      {
        isLeft = 0;
        isUp = 1;
        i--;
        j++;
      }
    }
    else
    {
      arr[i--][j] = count++;
      if(i == 0)
      {
        isUp = 0;
        isRight = 1;
      }
      if(arr[i][j] != 0)
      {
        isUp = 0;
        isRight = 1;
        i++;
        j++;
      }
    }
  }

  for(int k = 0; k < num; k++)
  {
    for(int l = 0; l < num; l++)
    {
      printf("%3d", arr[k][l]);
    }
    printf("\n");
  }
  printf("\n");
  return;
}

int main(void)
{
  int input;

  printf("정수를 입력해주세요 : ");
  scanf("%d", &input);

  makeSnailArray(input);

  return 0;
}