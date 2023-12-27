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
    string s1, s2; 
    cin >> s1 >> s2; 
    int i = s1.length(), j = s2.length(); 
    while(s1[i] == s2[j] && j >= 0 && i >= 0) i--, j--; 
    cout << (i + j + 2) << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}