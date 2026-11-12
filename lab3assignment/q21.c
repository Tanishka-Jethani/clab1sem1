#include<stdio.h>
int fact (int n){
    if(n==1 || n==0){
        return 1;
    }
    else 
    return n*fact(n-1);
}
int ncr(int n,int r){
    int ncr = (float )((fact(n))/((fact(n-r))*(fact(r))));
    return ncr;
}
int main()
{
    int n,r;
    printf("enter value of n and r \n");
    scanf("%d%d",&n,&r);
    printf("the value of ncr is %d \n",ncr(n,r)); 
return 0;
}
