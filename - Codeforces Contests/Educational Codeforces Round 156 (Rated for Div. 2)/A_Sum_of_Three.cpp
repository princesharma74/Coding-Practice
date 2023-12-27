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
    if((n-3)%3 && (n-3) != 1 && (n-3) != 2 && (n-3) > 0){
        cout << "YES" << endl; 
        cout << 1 << " " << 2 << " " << (n-3) << endl; 
    } 
    else if((n-5)%3 && (n-5) != 1 && (n-5) != 4 && (n-5) > 0){
        cout << "YES" << endl;
        cout << 1 << " " << 4 << " " << (n-5) << endl; 
    } 
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