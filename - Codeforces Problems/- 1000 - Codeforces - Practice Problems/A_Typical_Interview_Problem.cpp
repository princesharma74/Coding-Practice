#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1796/problem/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    string str; 
    cin >> str; 
    string main_string = "FBFFBFFB";
    main_string += main_string;
    main_string += main_string;
    regex pattern(str);
    if(regex_search(main_string, pattern)) cout << "YES" << endl; 
    else cout << "NO" << endl; 
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