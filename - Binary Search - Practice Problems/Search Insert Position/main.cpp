#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    int n; 
    cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int x; 
    cin >> x; 
    int L = 0, R = n - 1; 
    while(R - L > 0){
        int m = (R + L)/2;
        if(v[m] >= x){
            R = m; 
        }
        else{
            L = m + 1; 
        }
    }
    cout << L << endl;
    return 0;
}