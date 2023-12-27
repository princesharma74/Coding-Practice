#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int findIdx(vector<int> &nums, int i){
    int l = 0, r = nums.size()-1, m; 
    while(r - l > 1){
        m = (l + r)/2; 
        if(nums[m] - i > 0) l = m; 
        else r = m-1;
    }
    if(nums[r] - i > 0) return (r + 1); 
    else if(nums[l] - i > 0) return (l + 1); 
    return 0;
}

void solve(){
    int n; 
    cin >> n; 
    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i]; 
    vector<int> hts;
    for(int i = 0; i < n; i++){
        hts.push_back(findIdx(v, i));
    }
    bool check = true; 
    for(int i = 0; i < n; i++){
        if(v[i] != hts[i]){
            check = false; 
            break; 
        }
    }
    cout << (check ? "YES" : "NO") << endl; 
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