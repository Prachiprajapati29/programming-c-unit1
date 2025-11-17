#include<stdio.h>
int main()
{
    float m1,m2,m3,total,average;
    char grade;
    printf("Enter marks for three subjects(out of hundred):");
    scanf("%f%f%f",&m1,&m2,&m3);
    // Arithmetic operations
    total=m1+m2+m3;
    average=total/3;
    //Display total and average
    printf("Total=%.2f\n",total);
    printf("Average=%.2f\n",average);
    //Determine grade using if-else
    if(average>=90)
        grade='A';
    else if(average>=80)
        grade='B';
    else if(average>=70)
        grade='C';
    else if(average>=60)
        grade='D';
    else
        grade='F';

}