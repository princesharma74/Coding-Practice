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
    string str; 
    cin >> str; 
    int u = 0, d = 0, r = 0, l = 0; 
    int n = str.length(); 
    for(int i = 0; i < n; i++){
        if(str[i] == 'U') u++; 
        else if(str[i] == 'D') d++; 
        else if(str[i] == 'L') l++; 
        else if(str[i] == 'R') r++;
    }
    if(min(u, d) == 0){
        if(min(r, l) > 0){
            cout << 2 << endl; 
            cout << "RL" << endl; 
        }
        else cout << 0 << endl; 
    }
    else if(min(r, l) == 0){
        if(min(u, d) > 0){
            cout << 2 << endl; 
            cout << "UD" << endl; 
        }
        else cout << 0 << endl; 
    }
    else{
        cout << (2*(min(r, l) + min(u, d))) << endl; 
        for(int i = 0; i < min(r, l); i++) cout << "R";
        for(int i = 0; i < min(u, d); i++) cout << "D";
        for(int i = 0; i < min(r, l); i++) cout << "L";
        for(int i = 0; i < min(u, d); i++) cout << "U";
        cout << endl; 
    }

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