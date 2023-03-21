#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

vector<pair<int, int>> v; 

int f(int x){
    int ct = 0; 
    for(auto &it : v){
        if(x >= it.first && x <= it.second) ct++;
    }
    return ct; 
}

void deleteAnySeg(int vl){
    for(auto it = v.begin(); it != v.end(); it++){
        if(vl >= it->first && vl <= it->second){
            v.erase(it); 
            break;
        }
    }
}

//Problem Link: https://codeforces.com/contest/1795/problem/B
/* Approach: */
void solve(){
    v.clear();
    int n, k;
    cin >> n >> k;
    int mn_a = INT_MAX, mx_b = INT_MIN; 
    for(int i = 0; i < n; i++){
        int a, b; 
        cin >> a >> b;
        if (k >= a && k <= b){
            mn_a = min(a, mn_a);
            mx_b = max(b, mx_b);
            v.push_back({a, b});
        }
    }
    if(v.size() == 0){
        cout << "NO" << endl;
        return; 
    }
    bool ans = true; 
    for(int vl = mn_a; vl <= mx_b; vl++){
        if(vl != k){
            if(f(vl) > f(k)){
                if(v.empty()){
                    ans = false; 
                    break; 
                }
                else {
                    deleteAnySeg(vl);
                }
            }
            else if (f(vl) == f(k)){
                ans = false;
                break; 
            }
        }
    }

    if(v.empty()) ans = false; 

    cout << (ans ? "YES" : "NO") << endl; 

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