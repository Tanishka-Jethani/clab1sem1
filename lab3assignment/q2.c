#include<stdio.h>

int main()
{
     int a[10],b[10],c[10];
     printf("enter elements of array 1 \n");
     for(int i =0;i<10;i++){
        scanf("%d",&a[i]);
     }
     printf("enter elements of array 2 \n");
     for(int i =0;i<10;i++){
        scanf("%d",&b[i]);
     }
    
     for(int i =0;i<10;i++){
        printf("the sum of %d index is %d\n ",i,a[i]+b[i]);
     }

    
return 0;
}
