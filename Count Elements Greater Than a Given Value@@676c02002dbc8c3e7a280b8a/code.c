#include <stdio.h>
int main(){
    int N,i,k,a[100]={},count=0;
    scanf("%d %d",&N,&k);
    for(i=0;i<N;i++){
        scanf("%d",a[i]);
    }
    for(i=0;i<N;i++){
        if(a[i]>k){
            count++;
        }
        else{
            count=0;
        }
    }
    printf("%d",count);
return 0;
}