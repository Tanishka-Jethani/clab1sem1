#include<stdio.h>
typedef struct book
{
    char name[50];
    char author[50];
    int price;
    
}book;
void display(struct book b){
    printf("\nbook name is %s ",b.name);
    printf("\nauthor name is %s ",b.author);
    printf("\nprice is %d ",b.price);
    
}
int main()
{
    book b,c;
    printf("enter the book name \n ");
    scanf(" %[^\n]",b.name);
    printf("enter the author name \n ");
    scanf(" %[^\n]",b.author);
    printf("enter the price \n ");
    scanf("%d",&b.price);
   

    printf("enter the book name \n ");
    scanf(" %[^\n]",c.name);
    printf("enter the author name \n ");
    scanf(" %[^\n]",c.author);
    printf("enter the price \n ");
    scanf("%d",&c.price);
    display(b);
    display(c);

return 0;
}
