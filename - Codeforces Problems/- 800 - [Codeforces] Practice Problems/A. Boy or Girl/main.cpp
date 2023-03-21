#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/236/A
    string str; 
    cin >> str; 
    int hash[256] = {0};
    for(int i = 0; i < str.length(); i++){
        hash[str[i]]++;
    }
    int ct = 0;
    for(int i = 0; i < 256; i++) if(hash[i]) ct++;
    if(ct%2) cout << "IGNORE HIM!" << endl; 
    else cout << "CHAT WITH HER!" << endl; 
    return 0;
}