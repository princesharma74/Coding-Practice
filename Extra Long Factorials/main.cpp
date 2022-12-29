#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    __int64 ans = 1; 
    int n; 
    cin >> n; 
    while(n--){
        ans*=(n+1);
    }
    cout << ans;
    return 0;
}