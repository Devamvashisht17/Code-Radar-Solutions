#include<stdio.h>
void main() {
    int N,num=1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j= 1;j<=i;j++){
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
}