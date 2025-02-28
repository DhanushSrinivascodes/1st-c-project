#include <stdio.h>

int factorial() {
    int number;
    unsigned long long result = 1;

    // Input the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Calculate factorial
    for (int i = 1; i <= number; ++i) {
        result *= i;
    }

    // Output the result
    printf("Factorial of %d is %llu", number, result);

//    return 0;
}
