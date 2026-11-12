#include<stdio.h>

int main()
{
    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
     int a[n],b[n];
     printf("enter the elements of array  \n");
     for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
     }
     for(int i =0;i<n;i++){
        int temp = a[i];
        a[i]=b[n-i-1];
        b[n-i-1]=temp;
     }
     printf("the reverse array is \n");
     for(int i =0;i<n;i++){
        printf(" %d ",b[i]);
     }
return 0;
}
//or
//int temp = a[i];
//a[i]=a[n-i-1];
//a[n-i-1]=a[i]; 
