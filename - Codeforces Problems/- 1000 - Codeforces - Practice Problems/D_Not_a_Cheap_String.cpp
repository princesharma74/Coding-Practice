#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1702/D
/* Approach: */
void solve(){
    string str; 
    cin >> str; 
    int p, sum = 0;
    cin >> p; 
    int n = str.length(); 
    vector<pair<char, int>> vp(n);
    for(int i = 0; i < n; i++){
        vp[i].first = str[i];
        vp[i].second = i; 
        sum += (str[i] - 'a' + 1);
    }
    sort(vp.begin(), vp.end());
    while(sum > p){
        sum -= ( (--vp.end())->first - 'a' + 1);
        vp.erase(--vp.end());
    }
    vector<char> elf(n, '-');
    for(int i = 0; i < vp.size(); i++){
        elf[vp[i].second] = vp[i].first;
    }
    string ans = "";
    for(int i = 0; i < n; i++){
        if(elf[i] != '-') ans.push_back(elf[i]);
    }
    cout << ans << endl; 
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