//READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include<stdio.h>

int main()
{
     int n,digit;
     printf("enter the value of number \n");
     scanf("%d",&n);
     int sum =0;
     while(n!=0){
        digit = n%10;
        sum = sum+digit;
        n = n/10;
     }
     int k,d=0;

     if(sum>10){
        while(sum!=0){
            k = sum%10;
            d=d+k;
            sum=sum/10;
        }
        printf("the sum of sum of its digit is %d\n",d);
     }
     else{
        printf("the sum of digits is %d \n",sum);
     }
return 0;
}
