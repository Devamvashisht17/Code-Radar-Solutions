#include<stdio.h>
void main() {
    int num1;
    scanf("%d%d",&num1);
    if(num1>0) {
        printf("%d\n",Positive);
    }
    else if(num1<0) {
        printf("%d\n",Negative);
    }
    else{
        printf("Zero");
    }
}