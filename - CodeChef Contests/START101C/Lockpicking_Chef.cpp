#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t; 
	while(t--){
	    int n, m; 
	    cin >> n >> m; 
	    string s, k; 
	    cin >> s >> k; 
	    int ans = INT_MAX;
	    for(int i = 0; i+m <= n; i++){
	        int cal = 0; 
	        for(int j = 0; j < m; j++){
	            int d = (k[j] - '0');
	            int a = (s[i+j] - '0');
	            cal += min(abs(d-a), abs(9-abs(d-a)+1));
	        }
	        ans = min(ans, cal);
	    }
	    cout << ans << endl;
	}
	return 0;
}
