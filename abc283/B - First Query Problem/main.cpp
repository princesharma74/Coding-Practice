/*
Problem Link: https://atcoder.jp/contests/abc283/tasks/abc283_b
Approach: 
If tg is equal to 1, the program reads two more long long integers k and x 
from the standard input and updates the k-th element of the vector v with the value of x.
If tg is equal to 2, the program reads one more long long integer k from the 
standard input and prints the k-th element of the vector v to the standard output using the cout function.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll N;
    cin >> N; 
    vector<ll> v(N);
    for(ll i = 0; i < N; i++){
        cin >> v[i];
    }
    ll Q; 
    cin >> Q; 
    while(Q--){
        ll tg;
        cin >> tg; 
        if(tg == 1){
            ll k, x; 
            cin >> k >> x; 
            v[k-1] = x; 
        }
        else{
            ll k; 
            cin >> k; 
            cout << v[k-1] << endl; 
        }
    }
    return 0;
}