#include <stdio.h>

// Recursive function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;  // Base case 1
    if (n == 1) return 1;  // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

// Function to print Fibonacci series using a loop and recursion
void fibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); // Calling the recursive function
    }
    printf("\n");
}