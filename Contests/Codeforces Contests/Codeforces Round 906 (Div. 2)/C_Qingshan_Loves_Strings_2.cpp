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

bool checkGood(string s){
    int n = s.length();
    for(int i = 0; i < (n/2); i++){
        if(s[i] == s[n-i+1]) return false; 
    }
    return true;
}

bool checkFeasible(string s){
    int n = s.length(); 
    int val = 0; 
    for(int i = n-1; i >= 0; i--){
        if(val < 0) return false; 
        if(s[i] == '1') val++; 
        else val--; 
    }
    return val == 0; 
}

void printOperations(int m, string s){
    int n = s.length(); 
    for(int i = n-1; i >= 0; i--){
        if(s[i] == '1'){
            cout << (m + (n-1-i)) << " ";
        }
    }
    cout << endl; 
}

void solve(){
    int n; 
    cin >> n; 
    string str;
    cin >> str; 
    if(n&1){
        cout << -1 << endl; 
        return;
    }
    bool found = false; 
    for(int i = 0; i < str.length(); i+=2){
        if(checkGood(str.substr(i, n-i))){
            if(checkFeasible(str.substr(0, i))){
                printOperations(n, str.substr(i, n-i));
                found = true; 
                break;
            }
        }
    }
    if(!found) cout << -1 << endl;
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