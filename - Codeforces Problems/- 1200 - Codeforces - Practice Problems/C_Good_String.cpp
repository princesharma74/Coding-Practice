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
    string str; 
    cin >> str; 
    string ans; 
    int i = 0, j = 1; 
    while(j < n){
        if(str[i] != str[j]){
            ans.push_back(str[i]); 
            ans.push_back(str[j]);
            i = j+1; 
            j+=2;
        }
        else j++; 
    }
    cout << (str.length() - ans.length()) << endl; 
    cout << ans << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}