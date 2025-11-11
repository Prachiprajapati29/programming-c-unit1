#include<stdio.h> //to find the largest of three numbers using nested if else
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("Largest number=%d\n",a);
    }
    else if(b>a&&b>c)
    {
        printf("Largest number=%d\n",b);
    }
    else
    {
        printf("Largest number=%d\n",c);
    }
return 0;
}

