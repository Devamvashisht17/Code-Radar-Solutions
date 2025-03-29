#include <stdio.h>
int main() {
    int N,i,j,flag=1,a[100]={};
    scanf("%d",&N);
    for (i=0;i<N;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<N;i++){
        for(j=i;j<=N;j++){
            if(a[i]!=a[N-1-i]){
                flag=0;
                break;
            }
        }
    }
    if(flag==1 || N==1){
        printf("YES\n");
    }
    else if(flag==0 ){
        printf("NO\n");
    }
    return 0;
    }