#include<stdio.h>
void main() {
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=i;j++){
            printf("%d ", j)
        }
        printf("\n");
    }
}