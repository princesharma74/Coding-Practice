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
    string str; 
    cin >> str; 
    int pos; 
    cin >> pos; 
    int curlen = str.length();
    int n = curlen, i = 0;
    vector<char> st;
    while(pos > curlen){
        if(i < n && (st.empty() || st.back() <= str[i])){
            st.push_back(str[i]);
        }
        else{
            st.pop_back(); 
            pos -= curlen; 
            curlen--; 
        }
        i++; 
    }
    cout << st[pos-1];
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