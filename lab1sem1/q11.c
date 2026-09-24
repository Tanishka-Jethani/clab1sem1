#include<stdio.h>
int main(){
int x;
printf("enter the value in seconds ");
scanf("%d",&x);
int d,h,m,s;
    d = x/(3600*24);
    x=x%(3600*24);
    h= x/3600;
    x = x% 3600;
    m = x/60;
    x=x%60;
    s = x;
    printf("no. of days : %d ,hours : %d, min : %d , sec : %d ",d,h,m,s);


    return 0;
}
