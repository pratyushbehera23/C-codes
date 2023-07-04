#include<stdio.h>

int main() {
    int year, age;

    printf("Enter your birthyear: ");
    scanf("%d", &year);
    age = 2023 - year;
    printf("You are %d years old. \n", age);

    if (age >= 18) {
        printf("You are adult, you can vote!");
    } else {
        printf("You can't vote.");
    }

    return 0;
}
