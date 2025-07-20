#include <stdio.h>

void factorial() {
    int num, i;
    unsigned long long factorial = 1;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Loop to calculate factorial
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    //return 0;
}

