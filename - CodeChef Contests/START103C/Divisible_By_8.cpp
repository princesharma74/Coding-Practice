#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

void solve(){
    int n; 
    cin >> n; 
    string N; 
    cin >> N; 
    while(N[0] == '0'){
        N.erase(N.begin());
    }
    string l, r; 
    if(N.length() < 3){
        l = ""; 
        r = N; 
        if(r.length() == 1){
            r.insert(r.begin(), '0'); 
            r.insert(r.begin(), '0'); 
        }
        else if(r.length() == 2) r.insert(r.begin(), '0');
    }
    else{
        l = N.substr(0, N.length() - 3); 
        r = N.substr(N.length()-3, 3);
    }
    int mn = 3; 
    string ans;
    for(int i = 0; i < 1000; i += 8){
        if(i != 0 || l.length() > 0){
            string si = "000"; 
            si[0] = ( (i/100)%10 + '0' ); 
            si[1] = ((i/10)%10 + '0'); 
            si[2] = ((i)%10 + '0'); 
            
            int ct = 0; 
            if(si[0] != r[0]) ct++; 
            if(si[1] != r[1]) ct++; 
            if(si[2] != r[2]) ct++; 
            if(mn > ct){
                mn = ct;
                ans = si; 
            }
        }
    }

    ans = l + ans; 
    while(ans[0] == '0'){
        ans.erase(ans.begin());
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