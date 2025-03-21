#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);

    int copy[size];
    int counted[size];
    int arr[size];

    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
        copy[i] = arr[i];
        counted[i] = 0;
    }

    for(int i=0; i<size; i++) {
        if(counted[i]) continue;
        int sum = 0;
        for(int j=0; j<size; j++) {
            if(arr[i] == copy[j]){
                sum++;
                counted[j] = 1;
            }
        }
        printf("%d %d \n", arr[i], sum);
    }
}