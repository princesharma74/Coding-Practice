#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int m = 2e5;
int arr[m];

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int ans = -1;
    for(auto it : freq) {
        if(it.second >= 3) {
            ans = it.first;
            break;
        }
    }

    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve(); 
    }
    return 0;
}