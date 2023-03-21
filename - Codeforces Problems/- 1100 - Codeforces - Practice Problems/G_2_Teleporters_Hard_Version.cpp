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
    ui n, c; 
    cin >> n >> c; 
    vector<ui> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<ui> wt(n);
    for(int i = 0; i < n; i++){
        wt[i] = min((i + 1 + v[i]), (n - i + v[i]));
    }
    sort(wt.begin(), wt.end()); 

    ui ans = 0; 
    vector<ui> sv = wt;
    ui sv_c = c; 
    for(int j = 0; j < n; j++){
        wt = sv;
        wt[j] = j + 1 + v[j];
        sort(wt.begin(), wt.end());
        ui tel = 0; 
        c = sv_c;
        for(ui i = 0; i < n; i++){
            if(wt[i] <= c){
                tel++; 
                c -= wt[i];
            }
            else break; 
        }
        ans = max(tel, ans);
    }
    cout << ans << endl; 
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