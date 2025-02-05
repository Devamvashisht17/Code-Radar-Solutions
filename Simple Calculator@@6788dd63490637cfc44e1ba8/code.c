#include<stdio.h>
void main() {
    int num1,num2;
    char op;
    scanf("%d %d %c ",&num1,&num2,&op);
    switch(op){
        case '+':
        printf("%d",num1+num2);
        break;
        case '-':
        printf("%d",num1-num2);
        break;
        case '*':
        printf("%d",num1*num2);
        break;
        case '/':
        printf("%d",num1/num2);
        break;
        default:
        printf("Error\n");
    }
}