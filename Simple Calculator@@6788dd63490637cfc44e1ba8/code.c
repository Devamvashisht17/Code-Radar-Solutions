#include<stdio.h>
int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    char operation;
    scanf("%c", &operation);
    if(operation== '+'){
        printf("%d\n",num1+num2);
    }
    else if(operation== '-'){
        printf("%d\n",num1-num2);
    }
    else if(operation== '*'){
        printf("%d\n",num1*num2);
    }
    else if(operation== '/'){
        printf("%d\n",num1/num2);
    }
    else{
        printf("Error\n");
    }
    return 0;
}