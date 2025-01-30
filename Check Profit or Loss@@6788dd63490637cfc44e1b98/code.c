#include<stdio.h>
void main() {
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(cp>sp) {
        printf("Loss\n");
    }
    else if(sp>cp) {
        printf("Profit\n");
    }
    else{
        printf("No Profit No Loss\n");
    }
}