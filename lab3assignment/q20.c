#include<stdio.h>
int isprime(int n){
int flag = 1;
for(int i =2;i<n;i++){
    if(n%i==0){
        flag = 0;
    break;
    }
}
    if (flag ==0)
    return 0;
    else 
    return 1;

}

int main()
{
     int n;
     printf("enter the value of number whome u want to check wheter prime or not \n");
     scanf("%d",&n);
     printf("1=prime and 0 = not prime\n ");
     printf("so the output is %d\n",isprime(n));

return 0;
}
