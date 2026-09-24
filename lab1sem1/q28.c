#include<stdio.h>
#include<math.h>

//PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
//sum of cube of digits is eqal to the number itself
//153 = 1 cube +5 cube +3 cube
int main()
{
     int n,digit,sum = 0,original;
     printf("enter the value of a number ");
     scanf("%d",&n);
     original = n ;
     while(n!=0){
        digit = n%10;
        sum = sum + digit*digit*digit;
        n = n/10;
     }
     if(sum == original ){
        printf("ARMSTRONG no.");
     }
     else {
        printf("not a ARMSTRONG no.");
     }

return 0;
}
