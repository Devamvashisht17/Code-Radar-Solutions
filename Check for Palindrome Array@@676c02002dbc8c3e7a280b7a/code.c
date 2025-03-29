#include <stdio.h>
int main() {
    int N,i,j,flag=0,a[100]={};
    scanf("%d",&N);
    for (i=0;i<N;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(a[i]==a[N-1-i]){
                flag=1;
                break;
            }
            else{
                
                flag=0;
            }
        }
    }
    if(flag==1 || N==1){
        printf("YES");
    }
    else if(flag==0 ){
        printf("NO");
    }
    }