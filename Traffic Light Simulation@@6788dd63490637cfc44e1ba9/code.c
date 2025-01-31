#include<stdio.h>
int main() {
    char signal;
    if(signal =='R'){
        printf("Stop");
    }
    else if(signal =='G'){
        printf("Go");
    }
    else if(signal =='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}