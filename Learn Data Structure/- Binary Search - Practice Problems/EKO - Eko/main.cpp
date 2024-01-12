#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

ll N, M; 
vector<ll> v;

bool isEnough(ll H){
    ll sum = 0; 
    for(ll i = 0; i < N; i++){
        if(v[i] >= H) sum += (v[i] - H);
    }
    return sum >= M;
}

int main(){
    cin >> N >> M; 
    for(ll i = 0; i < N; i++){
        ll tmp; 
        cin >> tmp; 
        v.push_back(tmp);
    }
    ll L = 0, R = *max_element(v.begin(), v.end()), mid; 
    while(R - L > 1){
        mid = (R + L)/2;
        if(isEnough(mid)){
            L = mid; 
        }
        else{
            R = mid - 1; 
        }
    }
    if(isEnough(R)) cout << R << endl; 
    else cout << L << endl; 
    return 0;
}