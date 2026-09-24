//programe to calculate factorial of a number 
#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    
    return n*factorial(n-1);

}
//method 2
// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     int fact=1;
//     for(int i =1; i<=n ; i++){
//         fact = fact*i;
//     }
//     return fact;

// }
int main(){
  int n;
  printf("enter the value whose factorial u want to find ");
  scanf("%d",&n);
  printf("the factorial of %d is %d ",n,factorial(n));   
return 0;
}
