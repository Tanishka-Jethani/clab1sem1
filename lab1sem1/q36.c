#include<stdio.h>
//program to print 1,3,5,7,9...
int main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
   for (int i = 1;i<=n;i++){
   
        printf(" %d ",2*i-1);
    
   }  
return 0;
}
