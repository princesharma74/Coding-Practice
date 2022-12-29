#include<bits/stdc++.h>
using namespace std;
#define ll long long

// while dividing by 2 and 3 you might keep dividing the same more than once. 
// why not avoid the same repetitive calculation and do it just once using unordered map

unordered_map<ll, ll> mp; 

ll fun(ll k){
    if(!k) return 1;
    if(mp[k]) return mp[k];
    mp[k] = (fun(k/2) + fun(k/3));
    return mp[k];
}

int main(){
    ll N; 
    cin >> N; 
    cout << fun(N);
    return 0;
}