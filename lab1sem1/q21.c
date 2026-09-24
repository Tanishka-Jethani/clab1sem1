#include<stdio.h>

int main()
{
     int a,b;
     printf("enter the value of two numbers \n");
     scanf("%d%d",&a,&b);
     char ch;
     printf("enter the character for calculation for which type of task do u want to perform\n");
    scanf("%c",&ch);
     switch(ch){
        case '+' :
        printf("the addition of these numbers is %d \n",a+b);
        break;
        case '-' :
        printf("the substraction of these numbers is %d \n",a-b);
        break;
        case '%' :
        printf("the remainder of the numbers is %d when %d is divided by %d \n",a%b,a,b);
        break;
        case '*' :
        printf("the multiplication of these numbers is %d \n",a*b);
        break;

     }
return 0;
}
