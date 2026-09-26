//WAP to define a structure BOOK having members as title, author name, no. of pages, and price. Enter the details of a book and display them. //
#include<stdio.h>
#include<string.h>
struct book
{ 
    char title[50];
    char author[50];
    int pages;
    int price;
};
int main()
{
    struct book b[3];
    int i;
    printf("Enter the details of 3 books:");
    for(i=0;i<3;i++)
    {
        gets(b[i].title);
        gets(b[i].author);
        scanf("%d %d",&b[i].pages,&b[i].price);
    }
    for(i=0;i<3;i++)
    {
        printf("\n record no.:%d\t title:%s\t author:%s\t page:%d\t price:%d",i,b[i].title,b[i].author,b[i].pages,b[i].price);


    }


}