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
    ull n, k; 
    cin >> n >> k; 
    ull l = 0, r = k;
    while (l < r) {
        ull m = (l + r) / 2;
        if (m * (m + 1) / 2 <= k - 1) {
            l = m + 1;
        } else {
            r = m;
        }
    }
    ull i = l;
    ull _2b = n - 1 - (k - 1 - (i * (i - 1) / 2)), _1b = n - i - 1;
    string str; 
    for(ull i = 0; i < n; i++) str.push_back('a');
    str[_1b] = 'b'; 
    str[_2b] = 'b';
    cout << str << endl; 
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