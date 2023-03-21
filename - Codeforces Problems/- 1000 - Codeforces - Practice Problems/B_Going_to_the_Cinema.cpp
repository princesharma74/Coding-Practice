#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1781/B
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    // check if zero is present or not.
    int A[n], no_one_goes = 1;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        if(A[i] == 0) no_one_goes = 0; 
    }
    // look for group of trues (count of group of trues will be the answer.)
    bool prev = false;
    sort(A, A+n);
    int count = 0; 
    for(int i = 0; i < n; i++){
        if(!prev && i >= A[i]) count++; 
        prev = i >= A[i];
    }
    cout << count + no_one_goes << endl; 
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