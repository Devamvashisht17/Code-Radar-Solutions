#include<stdio.h>
void main() {
    int N;
    scanf("%d",&N);
    for(int i=N;i<=N;i++){
        for(int j=i;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}