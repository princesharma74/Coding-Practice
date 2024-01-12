#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    int t; 
    cin >> t;
    while(t--){
        ll n, s; 
        cin >> n >> s; 
        //Using Binary Search
        int L = 0, R = s + 1; 
        int m = (n/2 + 1);
        while(R - L > 1){
            int M = (R + L)/2;
            if(m*M <= s){
                L = M; 
            }
            else{
                R = M; 
            }
        }
        cout << L << endl; 
        // cout << (s / ((n/2) + 1)) << endl; // - Simple Solution
    }
    return 0;
}