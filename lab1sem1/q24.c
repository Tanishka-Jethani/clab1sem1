// WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
// Y(x,n) =
// 1+x where n=1
// 1+x/n where n=2
//  1 +xn when n=3
// 1 + nx when n>3 or n<1
#include<stdio.h>
#include<math.h>

int main()
{   int n;
    float x;
    float y;
    printf("enter the value of x and n \n");
    scanf("%f%d",&x,&n);
    if(n==1){
        y = 1+x;
        printf("the value of y is %f ",y);
    }
    else if(n==2){
        y = 1+(x/n);
        printf("the value of y is %f ",y);
    }
    else if(n==3){
        y = 1+pow(x,n);
        printf("the value of y is %f ",y);
    }
    else if(n>3 || n<1){
        y = 1+(x*n);
        printf("the value of y is %f ",y); 
    }
     
return 0;
}
