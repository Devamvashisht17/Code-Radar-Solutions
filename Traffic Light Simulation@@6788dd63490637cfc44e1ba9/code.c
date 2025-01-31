#include<stdio.h>
int main() {
    char signal;
    if(signal =='R'){
        printf("Stop");
        break;
    }
    else if(signal =='Y'){
        printf("Slow Down");
        break;
    }
    else if(signal =='G'){
        printf("Go");
        break;
    }
    else{
        printf("Invalid input");
        break;
    }
    return 0;
}