#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of 1st number\n");
    scanf("%d",&a);
    printf("enter the value of 2nd number\n");
    scanf("%d",&b);
    a = a + b;
    b = a-b;
    a = a - b;
    printf(" the value of 1st number after swapping is %d \n",a);
    printf(" the value of 2nd number after swapping is %d \n",b);
    

    return 0;
}
