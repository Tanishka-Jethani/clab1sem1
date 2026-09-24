#include<stdio.h>
//PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
int main(){
 int n;
int sumeven =0,sumodd =0;

 printf("enter the value of n ");
 scanf("%d",&n);
 for(int i =1; i<=n; i=i+1){
    if(i%2 == 0)
      sumeven =sumeven + i;
    else 
      sumodd =sumodd + i;
  
 }
 

 printf("the sum of even no. is %d and odd is %d \n",sumeven,sumodd);

return 0;
}
