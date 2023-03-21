#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1776/problem/L
/* Approach: */
ll a, b, c, n, t, m, p, q;
string s; 

void solve(){
    cin >> n >> s >> q;
    for(int i=0;i<n;i++){
        if(s[i]=='+') p++;
        else m++;
    }
	ll tot=p-m;
	for(int i=1;i<=q;i++){
		cin >> a >> b;
		if(tot==0){
			cout << "YES" << endl;
		}
		else if(a==b) cout << "NO" << endl;
		else if((tot*b)%(b-a)==0 && (tot*b)/(b-a)>=-m && (tot*b)/(b-a)<=p) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}