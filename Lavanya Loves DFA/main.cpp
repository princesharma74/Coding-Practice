#include <bits/stdc++.h>
using namespace std;

/*
PROBLEM LINK: https://www.codechef.com/problems/ICM2006?tab=statement
Approach: 
*/
int main() {
	// your code goes here
	int t; 
	cin >> t; 
	while(t--){
	    string str; 
	    cin >> str; 
        int n = str.length();
	    if(n > 3){
	        if(str.substr(n-4, 4) == "1000"){
                cout << "YES" << endl;
	        }
	        else cout << "NO" << endl; 
	    }
	    else {
	        cout << "NO" << endl; 
	    }
	}
	return 0;
}
