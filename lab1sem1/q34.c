//PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
//0,1,1,2,3,5,8....
#include<stdio.h>
void fibbo(int n){
    int a=0,b=1,c;
    for(int i =1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }

}
int main(){
    int n;
    printf("enter the no. of digits till where u want series \n");
    scanf("%d",&n);
    fibbo(n);
return 0;
}
