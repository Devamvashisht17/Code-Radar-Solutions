#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);   
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > N / 2) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
