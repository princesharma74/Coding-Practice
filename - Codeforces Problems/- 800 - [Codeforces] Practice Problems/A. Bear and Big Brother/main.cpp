#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/791/A
    int a, b; 
    cin >> a >> b;
    int yr = 0; 
    while(a <= b){
        yr++;
        a*=3; 
        b*=2; 
    }
    cout << yr << endl; 
    return 0;
}