#include <stdio.h>
typedef struct book
{
    char name[50];
    char author[50];
    int price;
} book;
void read(book *b)
{
    printf("enter the book name \n ");
    scanf(" %[^\n]", (*b).name);
    printf("enter the author name \n ");
    scanf(" %[^\n]", (*b).author);
    printf("enter the book price \n ");
    scanf(" %d", &(*b).price);
}
void display(book *b)
{
    printf(" the book name is %s\n ",(*b).name);
    printf(" the author name is %s \n ",(*b).author);
    printf(" the book price is %d\n ", (*b).price);
}
int main()
{
    book b;
    read(&b);
    display(&b);
    return 0;
}
