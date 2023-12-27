#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

void solve(){
    int n;
    cin >> n; 
    vector<int> v(n);
    pair<int, int> mnp = {INT_MAX, -1}, mxp = {INT_MIN, -1}; 
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(mnp.first > v[i]){
            mnp.first = v[i]; 
            mnp.second = i+1; 
        }
        if(mxp.first < v[i]){
            mxp.first = v[i]; 
            mxp.second = i+1; 
        }
    }
    vector<vector<int>> ans; 
    if(abs(mnp.first) > abs(mxp.first)){
        if(mnp.first < 0){
            for(int i = n-1; i >= 0; i--){
                while(i < n-1 && v[i+1] < v[i]){
                    v[i] += mnp.first; 
                    ans.push_back({i+1, mnp.second});
                } 
                if(mnp.first > v[i]){
                    mnp.first = v[i]; 
                    mnp.second = i+1; 
                }
                if(mxp.first < v[i]){
                    mxp.first = v[i]; 
                    mxp.second = i+1; 
                }
            }
        }
        else{
            for(int i = 0; i < n; i++){
                while(i > 0 && v[i-1] > v[i]){
                    v[i] += mnp.first; 
                    ans.push_back({i+1, mnp.second});
                } 
                if(mnp.first > v[i]){
                    mnp.first = v[i]; 
                    mnp.second = i+1; 
                }
                if(mxp.first < v[i]){
                    mxp.first = v[i]; 
                    mxp.second = i+1; 
                }
            }
        }
    }
    else{
        if(mxp.first < 0){
            for(int i = n-1; i >= 0; i--){
                while(i < n-1 && v[i+1] < v[i]){
                    v[i] += mxp.first; 
                    ans.push_back({i+1, mxp.second});
                } 
                if(mxp.first < v[i]){
                    mxp.first = v[i]; 
                    mxp.second = i+1; 
                }
                if(mnp.first > v[i]){
                    mnp.first = v[i]; 
                    mnp.second = i+1; 
                }
            }
        }
        else{
            for(int i = 0; i < n; i++){
                while(i > 0 && v[i-1] > v[i]){
                    v[i] += mxp.first; 
                    ans.push_back({i+1, mxp.second});
                }
                if(mxp.first < v[i]){
                    mxp.first = v[i]; 
                    mxp.second = i+1; 
                }
                if(mnp.first > v[i]){
                    mnp.first = v[i]; 
                    mnp.second = i+1; 
                }
            }
        }
    }
    
    cout << ans.size() << endl; 
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i][0] << " " << ans[i][1] << endl; 
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t; 
    while(t--){
        solve(); 
    }
    return 0;
}