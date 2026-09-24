#include<stdio.h>
int main(){
    float b,h;
    printf("enter the value of base\n");
    scanf("%f",&b);
    printf("enter the value of height\n");
    scanf("%f",&h);
    float area;
    area = ((1.0 *b*h)/2);
    printf("the area of triangle is %f \n",area);
    return 0;
}
