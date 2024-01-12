#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

void solve(){
    int n, m, d, sum;
    cin >> n >> m >> d; 
    vector<int> s(m); 
    for(int i = 0; i < m; i++) cin >> s[i]; 
    s.insert(s.begin(), 1); 
    s.insert(s.end(), n+1); 
    
    if(s[1] == 1) sum = m; 
    else sum = m+1;

    for(int i = 1; i <= m+1; i++){
        sum += ((s[i] - s[i-1] - 1)/d); 
    }

    map<int, int> ans; 
    for(int i = 1; i <= m; i++){
        int tmp = sum - ((s[i] - s[i-1] - 1)/d) - ((s[i+1] - s[i] - 1)/d) - 1 + ((s[i+1] - s[i-1]-1)/d);
        if(s[i] == 1) tmp++; 
        ans[tmp]++; 
    }
    cout << ans.begin()->first << " " << ans.begin()->second << endl; 
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