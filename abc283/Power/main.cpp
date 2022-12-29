/*
Problem Link: https://atcoder.jp/contests/abc283/tasks/abc283_a
Approach: 
Inside the loop, the program checks if the least significant bit of b is 1. 
If it is, the program multiplies ans by a. Then, the program multiplies a by
itself and shifts the value of b one bit to the right using the right shift 
operator (>>=). This effectively divides b by 2 and allows the loop to terminate 
after a number of iterations equal to the number of bits in b.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a, b; 
    cin >> a >> b; 
    int ans = 1;
    while(b){
        if(b&1) ans *= a;
        a *= a;
        b>>=1; 
    }
    cout << ans << endl; 
    return 0;
}