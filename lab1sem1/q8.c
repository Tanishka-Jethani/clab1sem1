#include<stdio.h>
int main(){
    int x = 31558150;
    int d,h,m,s;
    // d = x/(3600*24);
    // h = ((x-(d*3600*24))/3600);
    // m = ((x-(d*3600*24)-(h*3600)))/60;
    // s = ((x-(d*3600*24)-(h*3600)-(m*60)));
    // printf("no. of days %d ,hours %d, min %d , sec %d ",d,h,m,s);

    //alternate better method
    d = x/(3600*24);
    x = x % (3600*24);
    h = x /3600;
    x= x %(3600);
    m = x/60;
    x=x%60;
    s = x;
    printf("no. of days : %d ,hours : %d, min : %d , sec : %d ",d,h,m,s);
    return 0;
}
