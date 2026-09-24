//

#include<stdio.h>
int main()
{
     int a,b,c,max;
     printf("enter the value of 3 numbers to be compared ");
     scanf("%d%d%d",&a,&b,&c);
     // max = (a>b)? ((a>c) ? a:c):((b>c)?b:c);
     //max = (a>b)?((a>c)? a:c) : ((b>c? b:c));
     max = a>b? ((a>c)?a:c) : ((b>c)? b:c);
     printf("%d",max);


return 0;
}
