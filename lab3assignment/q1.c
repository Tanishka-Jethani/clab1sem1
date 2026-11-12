#include<stdio.h>

int main()
{
    int n;
    printf("enter n \n");
    scanf("%d",&n);
    if(n<2){
        printf("enter atleast 2 elements \n");
    }
    
    int a[n];
    printf("enter the numbers \n");
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int smax = a[0];
    for(int i = 1;i<n;i++){
        if(max<a[i]){
            smax = max;
            max = a[i];
        }
        else if(smax<a[i] && a[i]<max ){
            smax = a[i];
            
        }
    }
    if(smax==max){
        printf("no distinct value present");
    }
    else
        printf("the max value is %d \n and second max value is %d ",max,smax);
    
return 0;
}
