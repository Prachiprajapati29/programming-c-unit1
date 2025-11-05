#include<stdio.h>
int main()
{
    char name[20];
    int age;
    float marks;
    printf("enter name ,age and marks:");
    scanf("%s %d %f",name ,&age ,&marks);
    printf("Name: %s\nAge: %d\nMarks");
    printf("Name: %s\nAge: %d\nmrks: %.2f",name,age,marks);
    return 0;
}