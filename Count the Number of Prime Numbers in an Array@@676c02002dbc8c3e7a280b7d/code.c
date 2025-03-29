#include<stdio.h>
int main(){
    int N,count=0;
    scanf("%d", &N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<N;i++){
        int num= arr[i];
        int isPrime=1;

        if(num<2){
            isPrime=0;
        }
        else{
            for(int j=2;j<num;j++){
                if(num%j==0){
                    isPrime=0;
                    break;
                }
            }
        }
        if(isPrime){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}