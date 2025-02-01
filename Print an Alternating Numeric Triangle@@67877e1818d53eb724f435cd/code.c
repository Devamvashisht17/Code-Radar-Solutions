#include<stdio.h>
void main() {
    int N,start=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int num=start;
        for(int j=1;j<=i;j++){
            printf("%d ", num);
            num=1-num;
        }
        start=1-start;
        printf("\n");
    }
}