#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, slargest = INT_MIN;

    for (int i = 0; i < N; i++) {
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        } else if (arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }

    if (slargest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", slargest);
    }

    return 0;
}
