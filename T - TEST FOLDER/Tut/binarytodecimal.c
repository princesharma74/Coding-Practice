#include <stdio.h> 
#include <string.h>
int main(){
    char str[100];
    scanf("%s", str);
    int weight = 1; 
    int decimal = 0; 
    for(int i = strlen(str) - 1; i >= 0; i--){
        decimal += weight*(str[i] - 48);
        weight *= 2; 
    }
    printf("%d", decimal);
    return 0;
}