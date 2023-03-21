#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Problem Link: https://www.codechef.com/START77C/problems/THREENUMBERS
int main() {
	// your code goes here
	int t; 
	cin >> t; 
	while(t--){
	    ll a, b, c;
	    ll A[3]; 
	    cin >> A[0] >> A[1] >> A[2]; 
	    sort(A, A + 3);
	    a = A[0]; b = A[1]; c = A[2];
	    ll ans = -1;
	    if(!(abs(a-b)&1 || abs(a - c)&1))
	    ans = abs(((min(a, b) + abs(a-b)/2) - (c+abs(a-b)/2))/2) + abs(a-b)/2;
	    cout << ans << endl; 
    }
}
