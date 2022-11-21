#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        vector<ll> stn(n);
        multiset<ll> fr_max;
        for(int i = 0; i < n; i++) {
            cin >> stn[i];
            fr_max.insert(stn[i]);
        }
        ll max = *(--fr_max.end());
        ll sc_max = *(--(--fr_max.end()));
        for(int i = 0; i < n; i++){
            if(max!=stn[i]) cout << stn[i] - max << " ";
            else cout << stn[i] - sc_max << " ";
        }
        cout << endl; 
    }
    return 0;
}