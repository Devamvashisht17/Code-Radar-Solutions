#include<stdio.h>
int main() {
    int num1,num2;
    char operation;
    scanf("%d%d", &num1, &num2);
    scanf("%c", &operation);
    if(operation== '+'){
        printf("%d\n",num1+num2);
    }
    else if(operation== '-'){
        printf("%d\n",num2-num1);
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