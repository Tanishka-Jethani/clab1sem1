#include<stdio.h>
//PROGRAM TO PRINT TABLE OF ANY NO.
int main()
{
    int n;
    printf("enter the value whose table u want ");
    scanf("%d",&n);
    for(int i =1;i<=10;i++){
        printf("%d * %d = %d\n ",n,i,n*i);

    }
     
return 0;
}
