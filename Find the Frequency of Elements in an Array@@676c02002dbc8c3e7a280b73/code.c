#include <stdio.h>
int main(){
    int N,a[100]={},i,j,freq[100]={},count=1;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        freq[i]= -1;
    }
    for(i=0;i<N;i++){
        count=1;
for(j=i+1;j<N;j++){
    if(a[i]==a[j]){
        count++;
        freq[j]=0;
    }
}
if(freq[i]!=0){
    freq[i]=count;
}}

for(i=0;i<N;i++){
    if(freq[i]!=0){
printf("%d %d\n",a[i],freq[i]);}}
    return 0;
}