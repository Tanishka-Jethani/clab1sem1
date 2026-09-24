#include<stdio.h>

int main()
{
     int a,b;
     printf("enter the value of 2 integers\n ");
     scanf("%d%d",&a,&b);
     printf("choose which calculation u want to do \n");
     printf("1 for sum \n 2 for substraction \n 3 for multiplication \n 4 for finding remainder\n");
     int n;
     printf("enter the value of n \n");
     scanf("%d",&n);
     switch(n){
        case 1:
        printf("the sum of numbers is %d ",a+b);
        break;
        case 2:
        printf("the substraction of numbers is %d ",a-b);
        break;
        case 3:
        printf("the multiplication of numbers is %d ",a*b);
        break;
        case 4:
        printf("the remainder when %d is divided by %d of numbers is %d ",a,b,a%b);
        break;
        default:
        printf("nothing matches");

     }
return 0;
}
