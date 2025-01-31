#include<stdio.h>
int main() {
    int num1,num2;
    char op;
    scanf("%d%d",&num1,&num2);
    scanf("%c",&op);
    if(op=='+'){
        printf("%d\n",num1+num2);
    }
    else if(op=='-'){
        printf("%d\n",num2-num1);
    }
    else if(op=='*'){
        printf("%d\n",num1*num2);
    }
    else{
        printf("Error\n");
    }
    return 0;
}