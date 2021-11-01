#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data
{
  char name[20];
  char telNum[20];
} Data;

typedef enum option
{
  Insert = 1, Delete = 2, Search = 3, PrintAll = 4, Exit = 5
} Option;

int PrintMenu(void);


int main(void)
{
  Option option = 1;
  char inputStr[20];

  Data * numData = (Data *)malloc(sizeof(Data)*5);
  int numDataSize = 5;
  int numCount = 0;

  while(1)
  {
    option = PrintMenu();
    getchar();

    switch(option)
    {
      case Insert:
        if(numDataSize == numCount)
        {
          numDataSize += 5;
          numData = (Data *)realloc(numData, numDataSize);
        }

        printf("[ INSERT ] \n");
        printf("Input Name : ");
        fgets(inputStr, sizeof(inputStr), stdin);
        inputStr[strlen(inputStr)-1] = 0;
        strcpy(numData[numCount].name, inputStr);

        printf("Input Tel Number : ");
        fgets(inputStr, sizeof(inputStr), stdin);
        inputStr[strlen(inputStr)-1] = 0;
        strcpy(numData[numCount].telNum, inputStr);

        printf("             Data Inserted \n");
        numCount++;
        break;

      case Delete:
        printf("[ DELETE ] \n");
        printf("Name to Delete : ");
        fgets(inputStr, sizeof(inputStr), stdin);
        inputStr[strlen(inputStr)-1] = 0;
        for(int i = 0; i < numCount; i++)
        {
          if(!strcmp(numData[i].name, inputStr))
          {
            for(int j = i; j < numCount-1; j++)
            {
              strcpy(numData[j].name, numData[j+1].name);
              strcpy(numData[j].telNum, numData[j+1].telNum);
            }
            numCount--;
            break;
          }
        }
        printf("               Data Deleted \n");
        break;

      case Search:
        printf("[ SEARCH ] \n");
        printf("Name to Search : ");
        fgets(inputStr, sizeof(inputStr), stdin);
        inputStr[strlen(inputStr)-1] = 0;
        for(int i = 0; i < numCount; i++)
        {
          if(!strcmp(numData[i].name, inputStr))
          {
            printf("Name : %-10s Tel : %s \n", numData[i].name, numData[i].telNum);
            break;
          }
        }
        break;

      case PrintAll:
        printf("[ Print All Data ] \n");
        for(int i = 0; i < numCount; i++)
        {
          printf("Name : %-10s Tel : %s \n", numData[i].name, numData[i].telNum);
        }
        break;
      case Exit:
        return 0;
      default:
        break;
    }
  }
}

int PrintMenu(void)
{
  int option;
  printf("***** MENU ***** \n");
  printf("1. Insert \n");
  printf("2. Delete \n");
  printf("3. Search \n");
  printf("4. Print All \n");
  printf("5. Exit \n");
  printf("Choose the item : ");
  scanf("%d", &option);
  return option;
}