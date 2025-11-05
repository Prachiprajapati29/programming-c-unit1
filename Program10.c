#include<stdio.h>  //check if a number is positive or negative
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>0)
        printf("%d is positive",num);
    else if(num<0)
        printf("%d is negative",num);
    else
        printf("The number is zero");
        return 0;

}