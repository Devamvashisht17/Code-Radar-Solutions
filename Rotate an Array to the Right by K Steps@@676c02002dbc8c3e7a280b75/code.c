#include <stdio.h>
int main() {
    int size,rotate;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    // for(int i=0; i<size; i++){
    //     printf("%d ",arr[i]);
    // }
    //printf("\n");
    scanf("%d",&rotate);
    int temp[size];
    for(int i=0; i<size; i++){
        int new = (i+rotate)%size;
        temp[new] = arr[i];
    }

    for(int i=0;i<size;i++){
        arr[i] = temp[i];
    }

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}