#include<stdio.h>
void main() {
    int s1,s2,s3;
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1!=s2&&s2!=s3&&s1!=s3) {
        printf("Scalene\n");
    }
    else if(s1==s2||s2==s3) {
        printf("Isosceles\n");
    }
    else{
        printf("Equilateral\n");
    }
}