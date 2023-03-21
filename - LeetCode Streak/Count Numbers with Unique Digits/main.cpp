#include<bits/stdc++.h>
using namespace std; 

int countNumbersWithUniqueDigits(int n) {
    if(n == 0) return 1; 
    if(n == 1) return 10; 
    int ans = 10; 
    for(int i = 2; i <= n; i++){
        int st = 81;
        for(int j = 0; j < i-2; j++){
            st *= (8-j);
        }
        ans += st; 
    }
    return ans; 
}


int main(){
    cout << countNumbersWithUniqueDigits(3) << endl; 
    return 0;
}