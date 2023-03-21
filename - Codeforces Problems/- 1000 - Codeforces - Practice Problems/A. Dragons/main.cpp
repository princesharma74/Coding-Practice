#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/230/A
    /* Approach: INCOMPLETE*/
    int s, n; 
    cin >> s >> n; 
    vector<vector<int>> v(n, vector<int>(2));
    for(int i = 0; i < n; i++) cin >> v[i][0] >> v[i][1];
    sort(v.begin(), v.end());
    
    bool check = true; 
    for(int i = 0; i < n; i++){
        if(s > v[i][0]) s += v[i][1];
        else{
            check = false; 
            break;
        }
    }
    check ? cout << "YES" : cout << "NO";
    return 0;
}