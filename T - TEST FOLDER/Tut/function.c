#include <stdio.h>
// call by reference
void change(int *a, int *b){
    *a = *a + 3; 
    *b = *b + 3; 
}

void changeA(int *arr){
    arr[0] = arr[0] + 3; 
    arr[1] = arr[1] + 3; 
}

int main(){
    int x = 11; 
    int y = 7;
    change(&x, &y);
    printf("%d %d\n", x, y);

    int arr[2] = {11, 7}; // arr[0], arr[1]
    changeA(arr);
    printf("%d %d", arr[0], arr[1]);
    return 0; 
}