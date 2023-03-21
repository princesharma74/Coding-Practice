#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://www.codechef.com/START77C/problems/CHRGES
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    string str; 
    cin >> str; 
    
    bool flag = false;
    char prv;
    int ans = 0, ct = 0;
    for(char c : str){
        if(c != '0') flag = true; 
        if(flag){
            if(c != '0'){
                if(( prv == '+' && c == '-' ) || ( prv == '-' && c == '+' )){
                    ans += (ct&1);
                }
                prv = c; 
                ct = 0; 
            }
            else{
                ct++; 
            }
        }
    }
    cout << (flag ? ans : str.length()) << endl; 
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