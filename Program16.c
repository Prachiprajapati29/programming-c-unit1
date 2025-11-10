#include<stdio.h>
int main()
{
    int num;
    float price;
    char grade;
    printf("Enter an integer, a float and a character:");
    scanf("%d %f %c",&num,&price,&grade);
    printf("\ninteger:%d\n",num);
    printf("Float:%.2f\n",price);
    printf("character:%c\n",grade);
    return 0;
}