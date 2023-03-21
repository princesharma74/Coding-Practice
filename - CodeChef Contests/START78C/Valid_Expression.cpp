#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t; 
	while(t--){
	    int n, x; 
	    cin >> n >> x; 
	    if(x > 0 && x > n+1) cout << -1; 
        else if(x < 0 && abs(x) + 1 > n) cout << -1;
        else{
            if(x > 0){
                for(int i = 0; i < n; i++){
                    if(i < abs(x)-1) cout << '+'; 
                    else cout << "*";
                }
            }
            else if(x == 0){
                for(int i = 0; i < n; i++){
                    if(i == 0) cout << '-'; 
                    else cout << "*";
                }
            }
            else{
                cout << '-';
                for(int i = 0; i < n-1; i++){
                    if(i < abs(x)) cout << '-'; 
                    else cout << "*";
                }
            }
        }
	    cout << endl; 
	}
	return 0;
}
