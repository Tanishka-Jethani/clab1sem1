#include<stdio.h>

int main()
{
     int n;
     printf("enter the value of n \n");
     scanf("%d",&n);
     int a[n];
     printf("enter elements of array ");
     for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
     }
     int sum =0;
     for(int j =0;j<n;j++){
        sum = sum + a[j];
     }
     printf("sum is : %d ",sum);
return 0;
}
