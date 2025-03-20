#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0; i< N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<N;i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            printf("%d\n", arr[i]);
            return 0;
        }
    }
    if(arr[N-1]>arr[N-2]){
        printf("%d\n", arr[N-1]);
        return 0;
    }
    // if (arr[0] > arr[1]) {
    //     printf("%d\n", arr[0]);
    //     return 0;
    // }
    printf("-1\n");
    return 0;
}