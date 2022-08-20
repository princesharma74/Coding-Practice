#include <bits/stdc++.h>

using namespace std;

int serieSum(int n){
    return n*(n+1)/2;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif
    int n; 
    cin >> n;
    int a; 
    while(n--){
        int i = 0;
        cin >> a;  
        while(a >= serieSum(i)){
            i++;
        }
        cout << --i << endl;
    }

    return 0; 
}