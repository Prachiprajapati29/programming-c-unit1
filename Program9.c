#include<stdio.h> //simple interest calculation
int main()
{
    float principal, rate, time, simple_interest;
    printf("Enter principal amount, rate of interest and time in years:");
    scanf("%f %f %f",&principal, &rate, &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest=%.2f",simple_interest);
    return 0;
}