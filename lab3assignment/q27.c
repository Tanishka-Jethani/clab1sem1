#include<stdio.h>
typedef struct student {
    int roll;
    char name[50];
    int marks;

}student;
void display(student s[]){
    int i;
    printf("students scoring more than 500\n");
    for(i=0;i<4;i++){
        if(s[i].marks>500){
            printf("roll number %d \n",s[i].roll);
            printf("name %s \n",s[i].name);
            printf("marks %d \n",s[i].marks);

        }
    }

}

int main()
{
   student s[10];
   int i;
   for(int i =0;i<4;i++){
    printf("enter roll number \n");
    scanf("%d",&s[i].roll);
    printf("enter name \n");
    scanf(" %[^\n]",s[i].name);
    printf("enter marks \n");
    scanf("%d",&s[i].marks);

   }  
   display(s);
return 0;
}
