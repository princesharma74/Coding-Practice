#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int mySqrt(int x) {
    if(x != 0){
        int L = 1, R = x, m;
        while(R - L > 0){
            m = (R + L)/2;
            if(m*m == x) return m; 
            else if(m*m < x) L = m + 1; 
            else R = m - 1; 
        }
        return L;
    }
    else{
        return 0;
    }
}

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n;
        // cout << mySqrt(n) << endl; 
        vector<int> v; 
        for(int i = 1; i < 10; i += 2) v.push_back(i);
        cout << *lower_bound(v.begin(), v.end(), 4) << endl;
        /*
         -- LINEAR SEARCH -- 
        // Time Complexity: O(sqrt(n))
        int i = 1; 
        while(i <= n/i){
            i++;
        }
        cout << i-1 << endl; 

        
        -- BINARY SEARCH -- 
        // Time Complexity: O(log(n))
            int L = 1, R = n, x; 
            if(n != 0){
                while(R - L > 0){
                    x = (R + L)/2;
                    if(x*x == n){
                        L = x; 
                        break; 
                    }
                    else if(x*x < n) L = x + 1; 
                    else R = x - 1;
                }
                cout << L << endl; 
            }
            else{
                cout << 0 << endl;
            }
        */
    }
    return 0;
}