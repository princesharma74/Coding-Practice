#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/118/A
/* Approach: */
void solve(){
    string str; 
    cin >> str; 
    string str_cpy = ""; 
    for(char &c  : str){
        if(c >= 'A' && c <= 'Z'){
            c += ('a'-'A'); 
        }
        if( !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') ){
            str_cpy.push_back('.'); 
            str_cpy.push_back(c);
        }
    }
    cout << str_cpy << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}