#include<stdio.h>

int main()
{
     int m1,m2,m3,m4,m5;
     printf("enter the marks of all 5 numbers ");
     scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
     int sum ;
     sum = m1+m2+m3+m4+m5;
     printf("the total marks of all 5 subjects are %d",sum);
     float percentage;
     percentage = (1.0*sum/5.0);
    printf("percentage is %f",percentage);

    if (percentage<50)
    printf("\ngrade :fail\n");
    else if (percentage<=70 && percentage>=50)
    printf("\ngrade : B \n");
    else if (percentage<=90 && percentage>70)
    printf("\ngrade : AB\n ");
    else 
    printf("\n grade :A\n ");
return 0;
}
