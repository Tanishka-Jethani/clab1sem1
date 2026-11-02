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
int positive=0,negative=0,zero=0;
for(int i =0;i<n;i++){
    if(a[i]>0){ 
        positive++;
    }
    else if (a[i]<0){ 
        negative++;
    }
    else
    zero++;   
}
printf ("total number of positive numbers are %d , negative are %d and zero are %d ",positive,negative,zero);
return 0;
}
