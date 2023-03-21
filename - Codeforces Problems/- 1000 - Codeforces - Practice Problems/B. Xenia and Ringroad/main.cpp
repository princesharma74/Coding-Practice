#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/339/B
    /* Approach: */
    int n, m; 
    cin >> n >> m; 
    vector<int> a(m+1);
    for(int i = 1; i <= m; i++) cin >> a[i];
    int t = 0, cr = 1;
    for(int i = 1; i <= m; i++){
        if(cr <= a[i]){
            t+=(a[i]-cr); 
            cr = a[i];
        }
        else{
            t += (a[i] + (n - cr));
            cr = a[i];
        }
    }
    cout << t << endl; 
    return 0;
}