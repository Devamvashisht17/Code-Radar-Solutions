#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    int count=0;
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]> N/2){
            printf("%d", arr[i]);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}