#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/219/A
/* Approach: */
void solve(){
    int k; 
    cin >> k;
    int A[26] = {0};
    string str;
    cin >> str; 
    for(char c : str) A[c - 'a']++;
    string ans = "";
    for(int i = 0; i < 26; i++){
        if(A[i]%k){
            cout << -1 << endl; 
            return;
        }
        else{
            A[i]/=k;
        }
    }

    for(int i = 0; i < k; i++){
        for(int j = 0; j < 26; j++){
            for(int l = 0; l < A[j]; l++) cout << char(j + 'a');
        }
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}