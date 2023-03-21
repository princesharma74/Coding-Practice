#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/136/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    int arr[n] = {0};
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp; 
        arr[tmp-1] = (i+1);
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
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