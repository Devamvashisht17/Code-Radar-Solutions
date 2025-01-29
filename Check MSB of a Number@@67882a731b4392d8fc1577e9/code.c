#include<stdio.h>
void main() {
    int num;
    scanf("%d",&num);
    int msb=0X80000000;
    if(num & msb) {
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
}