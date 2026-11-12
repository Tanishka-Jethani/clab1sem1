#include<stdio.h>
#include<math.h>
void armstrong(int n){
    int sum =0,digit;
    int original =n;
    int count = 0;
    while(n!=0){
        count++;
        n = n/10;
    }
    n = original ;
    while(n!=0){
        digit = n%10;
    sum = sum + pow(digit,count);
    n = n/10;
    }
    if(sum == original)
        printf("armstrong \n");
    else 
        printf("not armstrong \n");


    
}
int main()
{
     int n;
     printf("enter the value of number \n");
     scanf("%d",&n);
     armstrong (n);
return 0;
}
