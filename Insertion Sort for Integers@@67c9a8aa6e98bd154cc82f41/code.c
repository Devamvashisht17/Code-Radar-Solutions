#include<stdio.h>
int insertionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}