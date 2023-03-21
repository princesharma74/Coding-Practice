#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/59/A
/* Approach: */
void solve(){
    string str; 
    cin >> str; 
    int ct_l = 0, ct_u = 0; 
    int i = 0; 
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z') ct_l++;
        else if(str[i] >= 'A' && str[i] <= 'Z') ct_u++;
        i++;
    }
    if(ct_l >= ct_u){
        i = 0; 
        while(str[i] != '\0'){
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] -= 'A' - 'a';
            i++; 
        }
    }
    else{
        i = 0; 
        while(str[i] != '\0'){
            if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 'a' - 'A';
            i++; 
        }
    }
    cout << str; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}