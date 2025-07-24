#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            printf("%d is the maximum number\n", a);
        } else {
            printf("%d is the maximum number\n", c);
        }
    } else {
        if (b > c) {
            printf("%d is the maximum number\n", b);
        } else {
            printf("%d is the maximum number\n", c);
        }
    }

    return 0;
}

