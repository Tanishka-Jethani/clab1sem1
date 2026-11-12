#include<stdio.h>

int main()
{
    int n;
    printf("enter n \n");
    scanf("%d",&n);
    int temp;
    int a[n];
    printf("enter the elements of array \n");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    for(int i = 0;i<n-1;i++){
        for(int j = 0; j<n-1-i ; j++){
            if(a[j]>a[j+1]){
                temp = a[j+1];
                a[j+1]= a [j];
                a[j]= temp;
            }
        }

    } 
    printf("the elements of arrays are by bubble sort   \n");
    for(int i = 0;i<n;i++){
        printf(" %d ",a[i]);
    } 

    
return 0;
}
