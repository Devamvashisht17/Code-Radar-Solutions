#include<stdio.h>
void main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    if(num1>num2) {
        printf("First\n");
    }
    else if(num2>num1){
        printf("Second\n");
    }
    else{
        printf("Equal\n");
    }
}