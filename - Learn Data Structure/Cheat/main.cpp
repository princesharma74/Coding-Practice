#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int calculate_time(long long a, long long b){
    long long lcm = a*b/__gcd(a,b); 
    return ( lcm/(a < b ? a : b) ) - 1;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        int a = 6, b = 8; 
        cout <<calculate_time(a, b) << endl; 
    }
    return 0;
}