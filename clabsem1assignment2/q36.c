#include<stdio.h>

int main()
{
     int n,m;
    
     printf("enter the no. of rows till u want \n");
     scanf("%d",&n);
     int k = 64;
     for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",k+j);
        }
         printf("\n");
    }
    
     
return 0;
}
