#include<stdio.h>
void main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    if(num1>=num2) {
        printf("%d\n",num1);
    }
    else{
        printf("%d\n",num2);
    }
}