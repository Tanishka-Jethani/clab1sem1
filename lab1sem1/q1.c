#include<stdio.h>
int main(){
    int p,t;
    float r;
    printf("enter the value of principle ");
    scanf("%d",&p);
    printf("enter the value of rate ");
    scanf("%f",&r);
    printf("enter the value of time ");
    scanf("%d",&t);
    float si;
    si = p*r*t;
    printf("the simple intrest is %f ",si);
    return 0;

}
