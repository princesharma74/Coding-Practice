#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/734/A
/* Approach: */
void solve(){
    int n;
    cin >> n; 
    string str; 
    cin >> str; 
    int a[2] = {0};
    for(char c : str){
        if(c == 'A') a[0]++;
        else a[1]++;
    }

    if(a[0] > a[1]) cout << "Anton" << endl; 
    else if(a[0] == a[1]) cout << "Friendship" << endl; 
    else cout << "Danik" << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}