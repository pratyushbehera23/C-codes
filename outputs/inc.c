#include<stdio.h>

int main() {
    int a=1, b;
    b = ++a + ++a + ++a;
    printf("%d %d", b, a);
    return 0;
}

// a=4
// b=10
