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
    vector<vector<int>> v(3, vector<int>(3, 0));
    int pos;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            char c; 
            cin >> c; 
            if(c != '?') v[i][j] = c - 'A';
            else pos = i; 
        }
    }
    int sum = 0; 
    for(int j = 0; j < 3; j++){
        sum += v[pos][j];
    }
    if(sum == 1) cout << 'C' << endl; 
    else if(sum == 2) cout << 'B' << endl;
    else cout << 'A' << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >>t;
    while(t--){
        solve(); 
    }
    return 0;
}