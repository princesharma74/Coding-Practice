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

int findVal(int x, int y){
    for(int l = 0; l < 5; l++){
        if(x == l && (y >= l && y <= (9-l))) return l+1;
        else if(y == l && (x >= l && x <= (9-l))) return l+1;
        else if(x == (9-l) && (y >= l && y <= (9-l))) return l+1;
        else if(y == (9-l) && (x >= l && x <= (9-l))) return l+1;
    }
    return 0;
}

void solve(){
    int ans = 0; 
    vector<string> v(10); 
    for(int i = 0; i < 10; i++) cin >> v[i];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(v[i][j] == 'X'){
                ans += findVal(i, j);
            }
        }
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