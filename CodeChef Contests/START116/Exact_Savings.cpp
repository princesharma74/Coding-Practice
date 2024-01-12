#include <bits/stdc++.h>
using namespace std;

int fun(int i, int k, int x, int z, vector<int> &v){
    if(i < 0){
        if((k+z)%x) return (k+z)/x; 
        return 1e6;
    }
    // not Take
    int ans = fun(i-1, k, x, z, v); 
    // Take
    ans = min(ans, fun(i-1, k+v[i], x, z, v));
    return ans;
}

int main() {
	// your code goes here
	int t; 
	cout << "hello";
	cin >> t; 
	while(t--){
	    int n, x, z; 
	    cin >> n >> x >> z; 
	    vector<int> v(n);
	    for(int i = 0; i < n; i++){
			v.push_back();
	        cin >> v[i]; 
	    }
	    int ans = fun(n-1, 0, x, z, v);
	    cout << (ans == 1e6 ? -1 : ans) << endl;
	}
}
