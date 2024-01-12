#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

bool isSubstring(string str1, string str2){
    int n = str1.length();
    for(int i = 0; i+n < str2.length(); i++){
        if(str2.substr(i, n) == str1) return true;
    }
   return false;
}

void solve(){
    string str; 
    cin >> str; 
    string ans1, ans2; 
    int n = str.length(); 
    for(int i = 0; i < n; i++){
        ans1 += "()";  
    }
    for(int i = 0; i < 2*n; i++){
        ans2 += ")("[i < n];  
    }

    if(ans1.find(str) == string::npos) cout << "YES\n" << ans1 << endl; 
    else if(ans2.find(str) == string::npos) cout << "YES\n" << ans2 << endl; 
    else cout << "NO" << endl; 
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