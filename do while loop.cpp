#include <stdio.h>
int main() {
    int i = 0;

    do {
        int j = 0;  // Separate variable for inner loop
        do {
            printf("Munaf\n");
            j++;
        } while (j < 1);  // Loop runs once

        printf("Print of loop\n");
        i++;
    } while (i < 2);  // Outer loop runs twice

    return 0;
}

