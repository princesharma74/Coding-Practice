#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;


//Problem Link: https://codeforces.com/problemset/problem/266/B
/* Approach: */
void solve(){
    int n, t; 
    cin >> n >> t; 
    vector<int> v; 
    string str;
    cin >> str; 
    for(int j = 0; j < t; j++){
        v.clear();
        for(int i = 0; i < n-1; i++){
            if(str.substr(i,2) == "BG") v.push_back(i);
        }
        for(int i : v){
            swap(str[i], str[i+1]);
        }
    }
    cout << str << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}