#include <bits/stdc++.h>
using namespace std;

const int N = 1e14+10;

int fun(int i, int k, int x, int z, vector<int> &v, vector<vector<int>> &dp){
    if(i < 0){
        if((k+z)%x == 0) return (k+z)/x; 
        return 1e18;
    }
    if(dp[i][k] != -1) return dp[i][k];
    // not Take
    int ans = fun(i-1, k, x, z, v, dp); 
    // Take
    ans = min(ans, fun(i-1, k+v[i], x, z, v, dp));
    return dp[i][k] = ans;
}

int main() {
	// your code goes here
	int t; 
	cin >> t; 
	while(t--){
	    int n, x, z; 
	    cin >> n >> x >> z; 
	    vector<int> v(n);
	    for(int i = 0; i < n; i++){
	        cin >> v[i]; 
	    }
	    vector<vector<int>> dp(n+1, vector<int>(1e18, -1));
	    int ans = fun(n-1, 0, x, z, v, dp);
	    cout << (ans == 1e6 ? -1 : ans) << endl;
	}
}
