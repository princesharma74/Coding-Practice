#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

void solve(){
    int n, m; 
    cin >> n >> m; 
    string s1, s2; 
    cin >> s1 >> s2; 
    for(int ct = 0; ct < 6; ct++){
        for(int i = 0; i+m <= s1.length(); i++){
            if(s1.substr(i, m) == s2){
                cout << ct << endl; 
                return; 
            }
        }
        s1 += s1; 
    }
    cout << -1 << endl;
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