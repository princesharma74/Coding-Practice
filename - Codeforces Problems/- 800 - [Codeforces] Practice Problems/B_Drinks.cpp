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
    double n; 
    cin >> n; 
    double sum = 0; 
    for(int i = 0; i < n; i++){
        double tmp; 
        cin >> tmp; 
        sum += tmp;
    }
    cout << fixed << setw(10) << (sum/n) << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}