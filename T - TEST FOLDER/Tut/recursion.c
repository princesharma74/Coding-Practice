#include <stdio.h>

void printT1(int a){
    if(a == 0) return;
    printT1(a - 1);
    printf("%d ", a);
}
int main(){
    int a = 10; 
    while(a > 0){
        printf("%d ", a);
        a--; 
    }
    printf("\n");
    printT1(10);

    return 0;
}