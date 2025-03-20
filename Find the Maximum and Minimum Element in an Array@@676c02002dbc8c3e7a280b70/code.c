#include<stdio.h>
#include<limits.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", arr[i]);
    }
    int min = INT_MAX , max= INT_MIN;

    for(int i=1;i<N;i++){
        if(arr[i]<min) {
            min=arr[i];
        }
        if(arr[i]> max){
            max=arr[i];
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}