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
    int n;
    cin >> n; 
    string str; 
    cin >> str; 
    int brk = 0; 
    for(int i = 0; i < ( n/2 ); i++){
        if(str[i] != str[n-1-i]) brk++; 
    }
    for(int i = 0; i <= n; i++){
        if(i <= brk){
            cout << (i == brk);
        }
        else{
            cout << ((n&1) ? 1 : ((i-brk-1)&1));
        }
    }
    cout << endl; 
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