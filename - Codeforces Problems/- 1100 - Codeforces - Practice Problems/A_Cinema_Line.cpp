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
    int n; 
    cin >> n; 
    vector<int> v(n);
    for(int &it : v) cin >> it; 

    int ct25 = 0, ct50 = 0; 
    bool ans = true; 
    for(int i = 0; i < n; i++){
        if(v[i] == 25) ct25++; 
        else if(v[i] == 50){
            if (ct25 >= 1){ 
                ct25--;
                ct50++; 
            }
            else{
                ans = false; 
                break;
            }
        }
        else if(v[i] == 100){
            if(ct50 >= 1 && ct25 >= 1){
                ct50--;
                ct25--; 
            }
            else if(ct25 >= 3) ct25-=3;
            else{
                ans = false; 
                break; 
            }
        }
    }

    cout << (ans ? "YES" : "NO") << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}