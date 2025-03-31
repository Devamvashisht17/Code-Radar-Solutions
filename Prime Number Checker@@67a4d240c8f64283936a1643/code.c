#include<stdio.h>
int isPrime(){
    int j=2;
    if(num<=1){
        return 0;
    }
    else{
        while(j<num){
            if(num%j==0){
                return 0;
            }
            j++;
        }
    }
    return 1;
}