#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

ll calculate_covered_area(vector<ll>& sizes, ll w) {
    ll total_area = 0;
    for (ll size : sizes) {
        ll side_length_with_border = size + 2 * w;
        total_area += side_length_with_border * side_length_with_border;
    }
    return total_area;
}

ll find_minimum_w(vector<ll>& sizes, ll c) {
    int l = 0, r = 1e9; 
    while(r - l > 1){
        int m = (l+r)/2; 
        if(calculate_covered_area(sizes, m) > c) r = m-1;
        else l = m;
    }
    if(calculate_covered_area(sizes, l)) return l; 
    else if(calculate_covered_area(sizes, r)) return r; 
    return -1; 
}

void solve() {
    ll n;
    cin >> n;
    ll c;
    cin >> c;
    vector<ll> sizes(n);
    for (ll i = 0; i < n; i++) {
        cin >> sizes[i];
    }

    ll w = find_minimum_w(sizes, c);
    cout << w << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
