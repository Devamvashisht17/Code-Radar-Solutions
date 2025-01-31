#include<stdio.h>
void main() {
    char signal;
    if(signal =='R'){
        printf("Stop\n");
    }
    else if(signal=='G'){
        printf("Go\n");
    }
    else if(signal=='Y'){
        printf("Slow Down\n");
    }
    else{
        printf("Invalid input\n");
    }
}