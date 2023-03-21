#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/58/A
    /* Approach: */
    string hll = "hello";
    string str; 
    cin >> str; 
    bool check = true; 
    int i = 0; 
    for(char c : hll){
        bool found = false; 
        while(i < str.length()){
            if(c == str[i]){
                found = true;
                i++;
                break;
            }
            i++;
        }
        if(!found || i > str.length()){
            check = false;
            break;
        }
    }
    if(check) cout << "YES" << endl; 
    else cout << "NO" << endl;
    return 0;
}