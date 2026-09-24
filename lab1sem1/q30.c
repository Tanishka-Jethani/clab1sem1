#include<stdio.h>
//PROGRAM TO REVERSE OF A GIVEN NO.
int main()
{
    int n,reverse =0,original,digit;
    printf("enter the value of n\n");
    scanf("%d",&n);
    original = n;
    while(n!=0){
        digit=n%10;
        reverse = reverse*10+digit;
        n = n/10;

    }
    printf("the original no. was %d and after reversing it is %d",original,reverse);
     
return 0;
}
