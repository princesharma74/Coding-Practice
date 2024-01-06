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
    char arr[8][8];
    for(int i = 0; i < 8; i++) for(int j = 0; j < 8; j++) cin >> arr[i][j];
    int mki = 0, mkj = 0; 
    bool found = false; 
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(arr[i][j] != '.'){
                mki = i; 
                mkj = j; 
                found = true;
                break; 
            }
        }
        if(found) break;
    }
    for(int i = mki; ( i < 8 && arr[i][mkj] != '.' ); i++) cout << arr[i][mkj];
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