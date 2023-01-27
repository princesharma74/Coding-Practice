#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        vector<vector<int>> v(n, vector<int>(3));
        for(int i = 0; i < n; i++){
            cin >> v[i][0];
            v[i][2] = i; 
        }

        for(int i = 0; i < n; i++) cin >> v[i][1];
        sort(v.begin(), v.end());
        cout << (v[v.size() - 1][2]) << endl; 
    }
    return 0;
}