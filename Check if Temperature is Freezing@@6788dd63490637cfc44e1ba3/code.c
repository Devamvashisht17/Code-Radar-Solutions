#include<stdio.h>
void main() {
    float f;
    scanf("%f",&f);
    if(f<=0){
        printf("Freezing\n");
    }
    else{
        printf("Above Freezing\n");
    }
}