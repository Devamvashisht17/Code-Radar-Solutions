#include<stdio.h>
int isPrime(int num){
    int p=2;
    if(num<=1){
        return 0;
    }
    else{
        while(p<num){
            if(num%p==0){
                return 0;
            }
            p++;
        }
    }
    return 1;
}
void printPrimesInRange(int a,int b){
    int found=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)) {
            printf("%d ", i);
            found=1;
        }
    }
    if(!found){
        printf("No prime numbers");
    }
    printf("\n");
}