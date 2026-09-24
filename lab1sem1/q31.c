//PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include<stdio.h>

int main()
{
     int n,original,digit,sum=0;
     printf("enter the value of number ");
     scanf("%d",&n);
     original = n;
     while(n!=0){
        digit = n%10;
        sum = sum +digit;
        n = n/10;
     }
     printf("the original no. was %d and after adding its digits we will get %d\n",original,sum);
return 0;
}
