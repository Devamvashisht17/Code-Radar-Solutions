#include<stdio.h>
void main() {
    int N;
    scanf("%d", &N);
    for(int i=N;i>=1;i--){
        for(int j=i;j<=N;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}