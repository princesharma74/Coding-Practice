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
    map<int, int> mp; 
    int n; 
    cin >> n; 
    for(int i = 0; i < 4*n; i++){
        int tmp; 
        cin >> tmp; 
        mp[tmp]++; 
    }
    vector<int> v; 
    for(auto &p : mp){
        if(p.second%2){
            cout << "NO" << endl; 
            return; 
        }
        else{
            for(int i = 0; i < p.second; i++) v.push_back(p.first); 
        }
    }
    bool check = true;
    int m = v.size(); 
    int area = v[0]*v[m-1]; 
    int i = 0, j = m-1; 
    while(i < j){
        if(v[i]*v[j] == area){
            i++; 
            j--; 
        }
        else{
            check = false;
            break; 
        }
    }
    cout << (check ? "YES" : "NO") << endl; 
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