#include<stdio.h>
void main() {
    int num,i;
    scanf("%d %d",&num,&i);
    if(num%i==0) {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}