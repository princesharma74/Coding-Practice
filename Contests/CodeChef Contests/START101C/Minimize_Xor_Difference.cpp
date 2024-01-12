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
    int a, b; 
    cin >> a >> b;
    int x = 0; 
    for(int i = 0; i < 32; i++){
        if(( (a>>i)&1 ) == ((b>>i)&1)){
            if((a>>i)&1){
                x |= (1<<i);
            }
        }
        else{
            int mx = max(a, b);
            int cal1 = abs((a^x) - (b^x));
            int st = x; 
            if((mx>>i)&1) st |= (1<<i);
            int cal2 = abs((a^st) - (b^st));
            if(cal1 > cal2) x = st; 
        }
    }
    cout << x << endl; 
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