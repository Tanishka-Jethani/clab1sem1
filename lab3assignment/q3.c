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
    int temp[10];

     for(int i =0;i<10;i++){
        temp[i] = a[i];
        a[i]=b[i];
        b[i]=temp[i];
       
     }
     printf(" elements of array 1 are\n");
     for(int i =0;i<10;i++){
        printf("%d ",a[i]);
     }
     printf("\n");
      printf(" elements of array 2 are\n");
     for(int i =0;i<10;i++){
        printf("%d ",b[i]);
     }
    
return 0;
}
