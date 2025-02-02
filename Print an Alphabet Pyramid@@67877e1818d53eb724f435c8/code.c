#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(char ch='A';ch<='A';ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}