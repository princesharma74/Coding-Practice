#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n, s, r;
        cin >> n >> s >> r; 
        int mx = s - r; 
        vector<int> v(n, 1);
        v[0] = mx;
        int cr_sum = n - 1 + mx, i = 0; 
        while(cr_sum < s){
            if(( v[i] + 1 ) <= mx) { v[i]++; cr_sum++; }
            else i++;
        }
        for(int it : v ) cout << it << " ";
        cout << endl;
    }
    return 0;
}