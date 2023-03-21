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
    string str1, str2; 
    cin >> str1 >> str2; 
    int n = str1.length(); 
    for(int i = 0; i < n; i++){
        cout << ((str1[i] - '0') ^ (str2[i] - '0'));
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}