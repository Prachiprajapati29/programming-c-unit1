#include<stdio.h> //c program to check positivity of two numbers using nested if
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>0)
    {
        if(b>0)
        {
            printf("Both numbers are positive\n");
        }

    
    }    return 0;
}