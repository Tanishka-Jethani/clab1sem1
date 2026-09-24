#include<stdio.h>
//c=5(f-32)/9
int main(){
   int f;
   printf("enter the value of temprature in farhenite") ;
   scanf("%d",&f);
   float c;
   c = ((5.0)*(f-32))/9;
    printf(" temprature in centrigrade is %f ",c) ;

    return 0;
}
