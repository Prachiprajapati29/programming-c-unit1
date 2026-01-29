#include<stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    int id;
    char name[20];
    struct Date dob;
};
int main() {
    struct Student s1 = {101,"Kiran",{15,8,2000}};
    printf("Name: %s\n", s1.name);
    printf("DOB: %d-%d-%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    return 0;
}