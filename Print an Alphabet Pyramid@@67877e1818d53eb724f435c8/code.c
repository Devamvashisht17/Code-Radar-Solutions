#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}