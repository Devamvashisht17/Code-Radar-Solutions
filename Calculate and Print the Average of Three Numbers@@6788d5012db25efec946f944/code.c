#include<stdio.h>
void main() {
    int a,b,c;
    float avg;
    scanf("%d%d%d",&a,&b,&c);
    avg=(float)(a+b+c)/3;
    printf("Average: %.2f",avg);
}