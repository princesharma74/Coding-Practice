#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k, q; 
    cin >> n >> k >> q; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<int> que(n);
    for(int i = 0; i < q; i++){
        cin >> que[i];
        int in = (que[i] - k)%n;
        if(in < 0) in += n;
        cout << v[in] << endl; 
    }
    return 0;
}
