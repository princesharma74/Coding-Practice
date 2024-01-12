#include <iostream>
using namespace std;

int main() {
	int t; 
	cin >> t; 
	while(t--){
	    int n; 
	    cin >> n;
	    string str; 
	    cin >> str; 
	    bool check = true;
	    for(int i = 0; i < n; i++){
	        if(str[i] == '1' && check){
	            if(i < n-2){
	                check = false;
	            }
	            cout << 1;
	        }
	        else cout << 0;
	    }
	    cout << endl;
	}
	return 0;
}
