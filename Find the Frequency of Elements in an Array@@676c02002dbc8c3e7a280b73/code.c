#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n], flag[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        flag[i] = 0; 
    }
    for (int i = 0; i < n; i++) {
        if (flag[i] == 1) 
            continue;
        int count = 1;
        for (int j=i+1;j<n;j++) {
            if (arr[i] == arr[j]) {
                count++;
                flag[j]=1; 
            }
        }
        printf("%d %d\n", arr[i], count);
    }
    return 0;
}
