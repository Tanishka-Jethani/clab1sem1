#include<stdio.h>
#include<limits.h>

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
        int min = INT_MAX;
        int indx = -1;
        for(int j =i;j<n;j++){
            if(a[j]<min){
                min = a[j];
                indx = j;
            }
            temp = a[i];
            a[i]=a[indx];
            a[indx] = temp;
        }
    }
    printf(" the sorted elements of array are\n");
    for(int i = 0;i<n;i++){
        printf(" %d ",a[i]);
    } 
    
return 0;
}
