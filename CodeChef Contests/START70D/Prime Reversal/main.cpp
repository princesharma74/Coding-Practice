/*
Problem Link: https://www.codechef.com/START70D/problems/PRIMEREVERSE
Approach: 

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        string A, B; 
        cin >> A >> B; 
        int i = 0; 
        int _1A = 0, _0A = 0; 
        while(A[i] != '\0'){
            if(A[i] == '1') _1A++; 
            else _0A++;
            i++;
        }

        int _1B = 0, _0B = 0;
        i = 0;
        while(B[i] != '\0'){
            if(B[i] == '1') _1B++; 
            else _0B++;
            i++;
        }
        if(_1A == _1B && _0A == _0B) cout << "YES" << endl; 
        else cout << "NO" << endl; 
    }
    return 0;
}