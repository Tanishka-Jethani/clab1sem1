#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    printf("enter the value of m1 \n");
    scanf("%d",&m1);
    printf("enter the value of m2 \n");
    scanf("%d",&m2);
    printf("enter the value of m3 \n");
    scanf("%d",&m3);
    printf("enter the value of m4 \n");
    scanf("%d",&m4);
    printf("enter the value of m5 \n");
    scanf("%d",&m5);
    int sum;
    sum =m1+m2+m3+m4+m5;
    float percentage;
    percentage=((sum*100.0)/500);
    printf("the sum of marks is %d\n",sum);
    printf("the percentage of marks is %f\n",percentage);
return 0;
}
