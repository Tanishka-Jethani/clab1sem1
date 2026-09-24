#include<stdio.h>
int main(){
    int hrs,min,sec;
    printf("enter the value of time hours \n");
    scanf("%d",&hrs);
    printf("enter the value time in min \n");
    scanf("%d",&min);
     printf("enter the value time in sec\n");
    scanf("%d",&sec);
    int time;
    time = ((hrs*3600)+(min*60)+(sec));
    printf("the total time in seconds is : %d \n",time);


    return 0;
}
