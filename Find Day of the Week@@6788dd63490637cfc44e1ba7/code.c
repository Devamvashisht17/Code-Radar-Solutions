#include<stdio.h>
void main() {
    int days;
    scanf("%d",&days);
    if(days==1){
        printf("Monday\n");
    }
    else if(days==2){
        printf("Tuesday\n");
    }
    else if(days==3){
        printf("Wednesday\n");
    }
    else if(days==4){
        printf("Thursday\n");
    }
    else if(days==5){
        printf("Friday\n");
    }
    else if(days==6){
        printf("Saturday\n");
    }
    else if(days==7){
        printf("Sunday\n");
    }
    else{
        printf("Invalid\n");
    }    
}