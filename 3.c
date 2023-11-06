Q3 Write a program in C to create a structure having named as books
consists of title, author, subject, book_id as its members. Read the
details of five books from user and display the data entered by the
user on screen(Use array of structure)


#include<stdio.h>
struct books
{
 char title[50];
 char author[50];
 char subject[100];
 int book_id;
};
   int main()
      {
             struct books bookArray[5];
             printf("Enter Details Of Five Books:\n");
             for(int i=0; i<5; i++)
             {
                  printf("Book %d:\n", i+1);
                  printf("Title:");
                  scanf("%s", bookArray[i].title);
                  printf("Author:");
                  scanf("%s", bookArray[i].author);
                  printf("Subject:");
                  scanf("%s", bookArray[i].subject);
                  printf("Book id:");
                  scanf("%s",bookArray[i].book_id);
              }
     printf("Details of the five books entered by the user:\n");
for (int i=0 ; i<5 ; i++)
{
     printf("Title:%s\n",bookArray[i].title);
     printf("Author:%s\n",bookArray[i].author);
     printf("Subject:%s\n",bookArray[i].subject);
     printf("Book_id:%d\n",bookArray[i].book_id);
}
return 0;
}