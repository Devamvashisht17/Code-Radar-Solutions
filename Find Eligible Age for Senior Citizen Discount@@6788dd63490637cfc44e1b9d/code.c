#include<stdio.h>
void main() {
    int age;
    scanf("%d",&age);
    if(age>=60) {
        printf("Eligible\n");
    }
    else{
        printf("Not Eligible\n");
    }
}