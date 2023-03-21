#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/266/A
    int n; 
    cin >> n; 
    string str; 
    cin >> str; 
    char cr = str[0];
    int ct = 1; 
    int ans = 0; 
    for(int i = 1; i < n; i++){
        if(str[i] == cr){
            ct++;
        }
        else{
            cr = str[i];
            if(ct > 1){
                ans += (ct - 1);
            }
            ct = 1;
        }
    }
    if(ct > 1) ans += (ct - 1);
    cout << ans << endl; 
    return 0;
}