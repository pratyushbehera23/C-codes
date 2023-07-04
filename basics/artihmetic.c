#include<stdio.h>

int main() {
    int n1, n2;
    char op;

    printf("Enter 1st number: ");
    scanf("%d", n1);
    printf("Enter operator: ");
    scanf("%c", op);
    printf("Enter 2nd number: ");
    scanf("%d", n2);
    
    switch (op) {
        case '+':
            printf("%d", n1 + n2);
            break;
        case '-':
            printf("%d", n1 - n2);
            break;
        case '*':
            printf("%d", n1 * n2);
            break;
        case '/':
            printf("%d", n1 / n2);
            break;
        
        default:
            printf("Invalid operator");
            break;
    }

    return 0;
}
