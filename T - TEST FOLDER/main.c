#include<stdio.h>
#include <windows.h>
int main(){
    // Loop for sound Jingle
    // for (int x = 0; x < 10; x++) {
    //     Beep(523, 500)
    // }
    for(long i = 0; i < 1000; i++){
        printf("\a"); 
    }
    return 0; 
}