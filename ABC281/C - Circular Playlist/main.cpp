#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll N, T; 
    cin >> N >> T; 
    ll sg[N], cml = 0;
    for(ll i = 0; i < N; i++){
        cin >> sg[i];
        cml+=sg[i];
    }
    T%=cml;
    cml = 0;
    for(ll i = 0; i < N; i++){
        i%=N;
        cml+= sg[i];
        if(cml > T){
            cout << i+1 << " " << sg[i] - cml + T;
            break;
        }
    }
    return 0;
}