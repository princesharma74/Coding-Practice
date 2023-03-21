#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n, x; 
        cin >> n >> x; 
        vector<pair<int, int>> fr(n, {-1, 0});
        for(int i = 0; i < n; i++){
            cin >> fr[i].first; 
            if(fr[i].first >= x) fr[i].second = 1; 
        }
        int total = 0, cost = 0; 
        for(int i = 0; i < n; i++){
            cin >> cost; 
            if(fr[i].second){
                total += cost; 
            }
        }
        cout << total << endl; 
    }
    return 0;
}