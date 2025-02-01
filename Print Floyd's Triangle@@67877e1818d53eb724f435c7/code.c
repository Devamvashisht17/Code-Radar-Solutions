#include<stdio.h>
void main() {
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}