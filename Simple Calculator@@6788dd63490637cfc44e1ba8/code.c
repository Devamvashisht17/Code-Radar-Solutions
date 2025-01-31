#include<stdio.h>
void main() {
    int num1,num2;
    char operation;
    scanf("%d%d%c",&num1,&num2,&operation);
    if(operation== '+'){
        printf("%d",num1+num2);
    }
    else if(operation== '-'){
        printf("%d",num1-num2);
    }
    else if(operation== '*'){
        printf("%d",num1*num2);
    }
    else if(operation== '/'){
        printf("%d",num1/num2);
    }
    else{
        printf("Error");
    }
}