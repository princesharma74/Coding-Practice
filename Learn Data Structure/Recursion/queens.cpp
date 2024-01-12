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

int M = 4;

int fun(int col, int row){
    if(row == M) return 1;

    int sum = 0;
    for(int i = 0; i < M; i++){
        if(i < (col-1) || i > (col+1)){
            sum += fun(i, row+1);
        }
    }
    return sum;
}

void solve(){
    cout << fun(-2, 0) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}