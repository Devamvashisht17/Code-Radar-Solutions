#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    for(int i=N;i>=1;i--){
        for(char ch='A';ch<='A'+1;ch++){
            printf("%c ", ch);
        }
        printf("\n");
    }
}