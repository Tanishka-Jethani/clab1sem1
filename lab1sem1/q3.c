#include<stdio.h>
int main(){
    int salary;
    printf("what is your salary per month ");
    scanf ("%d",&salary );
    int gs ;
    gs = (salary *12);
    printf("your gross salary is %d ",gs);
    return 0;
}
