#include<stdio.h>

int main()
{
     int n;
     printf("enter the no. of elements u want in array ");
     scanf("%d",&n);
     int a[n];
    printf("enter elements of array :\n ");
     for(int i =0;i<=n;i++){
     scanf("%d",&a[i]);
}
int oddcount =0,evencount=0;
for(int i =0;i<n;i++){
    if(a[i]%2==0){
        evencount++;
    }
    else 
    oddcount++;
}
printf ("total number of even numbers are %d and odd are %d ",evencount,oddcount);
return 0;
}
