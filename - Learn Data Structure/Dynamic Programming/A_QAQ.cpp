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

int func(int i, string &s, string str){
    if(s.size() == 3){
        if(s == "QAQ") return 1;
        return 0;
    }
    if(i == str.size()) return 0;
    
    int ans = func(i+1, s, str);
    if(str[i] == 'Q' || str[i] == 'A'){
        s.push_back(str[i]);
        ans += func(i+1, s, str); 
        s.pop_back(); 
    }
    return ans;
}


void solve(){
    string str; 
    cin >> str;
    string s; 
    cout << func(0, s, str) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}