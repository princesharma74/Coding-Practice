#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Problem Link: https://codeforces.com/problemset/problem/1715/B
int main() {
	// your code goes here
	int t;
	cin >> t; 
	while(t--){
		unsigned ll n, k, b, s; 
		cin >> n >> k >> b >> s; 
		unsigned ll cntr = (b/n)*(n-1)*k + (b - (b/n)*(n-1))*k;
		if(s < b*k || s > (cntr + (k-1)*n)){
			cout << -1 << endl; 
			continue;
		}
		
		vector<unsigned ll> v(n-1, ( b/n )*k); 
		v.push_back((b - (b/n)*(n-1))*k); 
		unsigned ll rem = (s - cntr);
		
		int i = 0; 
		while(rem){
			if(rem >= (k-1)){
				v[i] += (k-1); 
				rem -= (k-1);
			}
			else{
				v[i] += rem; 
				rem = 0;
			}
			i++;
		}
		
		for(int j = 0; j < n; j++) cout << v[j] << " \n"[j==n-1];
        unsigned ll sum = 0; 
		for(int j = 0; j < n; j++){
            sum += v[j];
        }
		
	}
	return 0;
}