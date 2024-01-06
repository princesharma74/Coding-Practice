#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/contest/1791/problem/A
    /* Approach: */
    int t; 
    cin >> t; 
    while(t--){
        char c; 
        cin >> c; 
        if(c == 'c' || c == 'o' ||c == 'd' || c == 'e' || c == 'f' || c == 'o' || c == 'r'|| c == 's'){
            cout << "YES" << endl; 
        }
        else cout << "NO" << endl;
    }
    return 0;
}