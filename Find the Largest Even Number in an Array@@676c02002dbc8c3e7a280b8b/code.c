#include <stdio.h>
#include <limits.h>
int main() {
    int N, num;
    scanf("%d", &N);
    int highest_even = INT_MIN;
    for (int i=0;i<N;i++) {
        scanf("%d", &num);
        if (num%2==0 && num>highest_even) {
            highest_even = num;
        }
    }
    if (highest_even == INT_MIN) {
        printf("-1\n");
    } 
    else {
        printf("%d\n", highest_even);
    }
    return 0;
}
