#include<stdio.h>

int main()
{
     int a,b,c,max;
     printf("enter the value of 3 numbers to be compared ");
     scanf("%d%d%d",&a,&b,&c);
     if(a>b){
        if(a>c)
        max = a;
        else 
        max = c;
     }
     else if(b>a){
        if(b>c)
        max = b;
        else max = c;
     }
     else 
     max = c;
     printf("the maximum value among these is %d ",max);

return 0;
}
