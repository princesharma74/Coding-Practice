#include<stdio.h>
int main(){
    char c;
    char str1[50], str2[50]; 
    scanf("%c%s\n", &c, str1); 
    scanf("%[^\n]s", str2);
    printf("%c\n%s\n%s", c, str1, str2); 
    return 0; 
}