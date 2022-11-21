#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n = 14;
    char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int m = (2*n - 1)/2, ix, s = n-1; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n - 1; j++){
                j > m ? ix = 2*n-2 - j : ix = j; 
                if(ix <= s) printf("%c", ch[ix]); else printf(" ");
        }
        s--;
        printf("\n");
    }
    return 0;
}