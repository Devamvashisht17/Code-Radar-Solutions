#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);

    int arr[N];  // Declare an array of size N

    // Read array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is a palindrome
    for (i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - 1 - i]) {
            break; // Break loop on first mismatch
        }
    }

    // Check if loop completed without breaking
    if (i == N / 2) {
        printf("YES\n");  // Loop completed → Palindrome
    } else {
        printf("NO\n");   // Loop broke early → Not a Palindrome
    }

    return 0;
}
