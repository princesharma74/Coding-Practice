#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/contest/1791/problem/C
    /* Approach: */
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n; 
        string str; 
        cin >> str; 
        int i = 0, j = str.length() - 1;
        while(i < j){
            if(str[i] == str[j]){
                break; 
            }
            i++; j--;
        }
        if(i > j){
            cout << 0 << endl; 
        }
        else{
            cout << j - i + 1 << endl; 
        }
    }
    return 0;
}