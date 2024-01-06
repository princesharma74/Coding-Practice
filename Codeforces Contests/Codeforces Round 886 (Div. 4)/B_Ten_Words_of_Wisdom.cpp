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

    int words[50], quality[50];
    int maxQuality = 0, winnerIdx = -1;

    for (int i = 0; i < n; i++) {
        cin >> words[i] >> quality[i];
        if (words[i] <= 10 && quality[i] > maxQuality) {
            maxQuality = quality[i];
            winnerIdx = i;
        }
    }

    cout << (winnerIdx + 1) << endl;
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