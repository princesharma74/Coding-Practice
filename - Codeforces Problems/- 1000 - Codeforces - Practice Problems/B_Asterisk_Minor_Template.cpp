#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1796/problem/B
/* Approach: */
void solve(){
    string str1, str2; 
    cin >> str1 >> str2; 
    int len1 = str1.length(), len2 = str2.length();
    if (str1[0] == str2[0]){
        cout << "YES" << endl; 
        cout << str1[0] << "*" << endl;
        return; 
    }
    else if (str1.back() == str2.back()){
        cout << "YES" << endl; 
        cout << "*" << str1.back() << endl;
        return;
    }

    if(len1 < len2) swap(str1, str2);
    len1 = str1.length();
    len2 = str2.length();

    map<string, int> mp; 
    for(int i = 0; i+2 <= len1; i++){
        mp[str1.substr(i,2)]++;
    }

    for(int i = 0; i+2 <= len2; i++){
        if(mp[str2.substr(i,2)]){
            cout << "YES" << endl; 
            cout << "*" << str2.substr(i,2) << "*" << endl; 
            return; 
        }
    }
    cout << "NO" << endl; 
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