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
    int prod = 1;
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp; 
        if(tmp > 0) tmp = 1; 
        else if(tmp < 0) tmp = -1;
        else tmp = 0;

        prod *= tmp;
    }
    if(prod > 0) cout << "1\n1 0" << endl; 
    else cout << 0 << endl;
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