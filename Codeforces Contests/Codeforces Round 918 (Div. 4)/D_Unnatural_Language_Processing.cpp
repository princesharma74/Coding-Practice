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

bool isV(char c){
    return (c == 'a' || c == 'e');
}

void solve(){
    int n; 
    cin >> n; 
    string str; 
    cin >> str; 
    string ans; 
    for(int i = n-1; i >= 0; i--){
        if(isV(str[i])){
            ans.push_back(str[i]);
            ans.push_back(str[i-1]);
            if(i-1 != 0) ans.push_back('.');
            i--;
        }
        else{
            ans.push_back(str[i]);
            ans.push_back(str[i-1]);
            ans.push_back(str[i-2]);
            if(i-2 != 0) ans.push_back('.');
            i-=2;
        }
    }
    reverse(ans.begin(), ans.end());
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