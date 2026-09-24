#include<stdio.h>

int main()
{
     
     int a,b,c;
     printf("enter the value of 3 numbers to be compared ");
     scanf("%d%d%d",&a,&b,&c);
     if((a>b)&&(a>c))
     printf("max = %d ",a);
     else if((b>a)&&(b>c))
     printf("max = %d ",b);
     else if((c>a)&&(c>b))
     printf("max = %d ",c);
     else 
     printf("error");
return 0;
}
