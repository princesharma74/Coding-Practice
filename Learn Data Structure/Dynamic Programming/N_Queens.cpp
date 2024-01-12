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

int n = 4; 

bool check(int r, int c, vector<vector<int>> &qs){
    for(auto it : qs){
        int rdiff = (r - it[0]);
        if(c == it[1] || c == it[1] + rdiff || c == it[1] - rdiff) return false; 
    }
    return true;
}

void printBoard(vector<string> &str){
    for(int i = 0; i < n; i++){
        cout << str[i] << endl; 
    }
    cout << endl; 
}

void queen(int r, vector<vector<int>> &qs, vector<string> &str){
    if(r == n){
        printBoard(str);
        return;
    }
    for(int j = 0; j < n; j++){
        if(check(r, j, qs)){
            str[r][j] = 'Q';
            qs.push_back({r, j});
            queen(r+1, qs, str);
            str[r][j] = '.';
            qs.pop_back();
        }
    }
}

void solve(){
    vector<string> board(n, "....");
    vector<vector<int>> qs;
    queen(0, qs, board);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}