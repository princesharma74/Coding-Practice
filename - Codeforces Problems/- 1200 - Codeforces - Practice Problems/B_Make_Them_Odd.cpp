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
    set<int> st; 
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp; 
        st.insert(tmp);
    }
    int ans = 0; 
    while(!st.empty()){
        int a = *st.rbegin(); 
        st.erase(a);
        if(a%2 == 0){
            ans++; 
            st.insert(a/2);
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