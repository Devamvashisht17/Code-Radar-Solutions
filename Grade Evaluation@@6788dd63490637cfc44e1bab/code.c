#include<stdio.h>
void main() {
    char ch;
    scanf("%c", %ch);
    if(ch== 'A'|| ch== 'a'){
        printf("Excellent\n");
    }
    else if(ch== 'B' || ch=='b'){
        printf("Good\n");
    }
    else if(ch== 'C' || ch=='c'){
        printf("Average\n");
    }
    else if(ch== 'D' || ch=='d'){
        printf("Below Average\n");
    }
    else if(ch== 'F' || ch=='f'){
        printf("Fail\n");
    }
    else{
        printf("Invalid grade\n");
    }
}