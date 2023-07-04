#include<stdio.h>

int sum(int a, int b);

int main() {
    int x=3, y=4;
    int s = sum(x,y);
    printf("Sum is %d", s);

    return 0;
}

int sum(int a, int b) {
    // printf("Sum is %d", a+b);
    return a+b;
}
