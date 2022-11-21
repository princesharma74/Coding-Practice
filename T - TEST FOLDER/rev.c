#include<stdio.h>

void printA(int arr[], int size){
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5; 
    int half = n/2; 
    for(int i = 0; i < half; i++){
        int temp = arr[i]; 
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp; 
    }
    printA(arr, 5);
    return 0;
}