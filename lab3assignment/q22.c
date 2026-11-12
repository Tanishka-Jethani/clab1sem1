#include<stdio.h>
int max(int n,int a[]){
    int max = a[0];
    for(int i =1;i<n;i++){
        if(max<a[i]){
            max = a [i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("enter value of number of elements u want \n");
    scanf("%d",&n);
    if(n<=0){
        printf("enter positive number \n");
        return 0;
    }

   int a[n];
   printf("enter elements of array\n");
   for(int i =0;i<n;i++){
   scanf("%d",&a[i]); 
   }
   
   printf("the max value of element among array is %d \n",max(n,a));

return 0;
}
