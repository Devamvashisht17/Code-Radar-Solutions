#include <stdio.h>
int main() {
    int N, i, n, sum, a[100] = {};
    

    scanf("%d", &N);
    
   
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    
   
    for (i = 0; i < N; i++) {
        sum = 0; 
        if(a[i]>0){
        while (a[i] != 0) {
            n = a[i] % 10;    
            sum =sum+ n;         
            a[i] =a[i]/ 10;       
        }
          printf("%d ", sum);  }

        else if(a[i]<0){
           int sum_neg=0;
             while (a[i] != 0) {
               int num=-(a[i]);
            n = num % 10;    
            sum_neg =sum_neg+ n;         
            num =num/ 10;       
        }
            printf("%d ", sum_neg);
        }
        else{
            printf("0");
        }
       
      
    }
    return 0;
}