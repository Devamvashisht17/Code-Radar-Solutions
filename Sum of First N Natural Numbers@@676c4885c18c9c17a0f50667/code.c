#include<stdio.h>
void main() {
    int N,sum=0;
    scanf("%d %d",&N,&sum);
    for(int i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("%d",&sum);
}