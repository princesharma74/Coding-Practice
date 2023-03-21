#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        int ct = 0; 
        for(int i = 0; i < n; i++){
            int tmp; 
            cin >> tmp; 
            if(tmp == 1) ct++;
        }
        if(ct%2 == n%2) cout << "YES" << endl; 
        else cout << "NO" << endl;
    }
    return 0;
}