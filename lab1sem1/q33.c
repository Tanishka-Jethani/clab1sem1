//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include<stdio.h>

int main()
{
    int n,num,max,min;
    printf("enter how many inputs u would put for comparing\n ");
    scanf("%d",&n);
    if(n<2)
    {
    printf("atleast put 2 numbers ");
    }
    printf("enter the numbers \n");
    scanf("%d",&max);
    scanf("%d",&min);
    int temp;
    if(min>max){
        temp = max;
        max = min;
        min = temp;
    }
    for(int i = 3;i<=n;i++){
        scanf("%d",&num);
        if(num>max){
            max = num;
        }
        else if (num<min){
            min = num ;
        }
    }

    printf("the maximum value is %d and minimum value is %d ",max,min);


     
return 0;
}
