#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book
{
  char bookname[30];
  char author[20];
  int pages;
} Book;

int main(void)
{
  Book * books[3];

  printf("도서 정보 입력 \n");
  for(int i = 0; i < 3; i++)
  {
    books[i] = (Book *)malloc(sizeof(Book));
    printf("저자 : ");
    fgets(books[i]->author, sizeof(books[i]->author), stdin);
    books[i]->author[strlen(books[i]->author)-1] = 0;   // \n 삭제

    printf("제목 : ");
    fgets(books[i]->bookname, sizeof(books[i]->bookname), stdin);
    books[i]->bookname[strlen(books[i]->bookname)-1] = 0;   // \n 삭제

    printf("페이지 수 : ");
    scanf("%d", &(books[i]->pages));
    getchar();    // \n 삭제
  }

  for(int i = 0; i < 3; i++)
  {
    printf("book %d \n", i+1);
    printf("저자 : %s \n", books[i]->author);
    printf("제목 : %s \n", books[i]->bookname);
    printf("페이지 수 : %d \n", books[i]->pages);
    free(books[i]);
  }

  return 0;
}