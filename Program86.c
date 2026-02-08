#include<stdio.h>
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main() {
    enum week day;
    day=wednesday;
    printf("numeric value of wednesday is:%d\n",day);
    return 0;
}
