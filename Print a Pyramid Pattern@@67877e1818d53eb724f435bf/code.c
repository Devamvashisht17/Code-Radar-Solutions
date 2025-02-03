#include<stdio.h>
void main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int l=i-1;l>=1;l--){
            printf("*");
        }
        printf("\n");
    }
}