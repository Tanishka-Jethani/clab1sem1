#include<stdio.h>
void fibbo(int n){
    int a = 0;
    int b = 1;
    int c=a+b;
    for(int i =1;i<=n;i++){
        printf(" %d ",a);
        a = b;
        b = c;
        c = a+b;
    }

}
int main()
{
  int n;
  printf("enter the number of digits u want in series\n ");
  scanf("%d",&n);
  fibbo(n);   
return 0;
}
