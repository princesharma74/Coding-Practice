/*
Problem Link: https://codeforces.com/contest/514/problem/A
Approach: 
Flip only those digits which are greater than 4 because these are the digits which will minimise the number overall. 
But there is an exception, do not flip 9 when it's on first digit as it will reduce the number of digits due to zero at highest place. 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    ll ans = 0; 
    cin >> n; 
    ll weight = 1; 
    while(n){
        ll rem = n%10;
        if(rem > 4 && ( n/10 || rem != 9 )){
            ans+=(9 - n%10)*weight; 
        }
        else{
            ans+=(n%10)*weight; 
        }
        weight*=10; 
        n/=10; 
    }
    cout << ans << endl; 
    return 0;
}