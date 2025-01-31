#include<stdio.h>
void mai() {
    float f;
    scanf("%f",&f);
    if(f<=0){
        printf("Freezing\n");
    }
    else{
        printf("Above Freezing\n");
    }
}