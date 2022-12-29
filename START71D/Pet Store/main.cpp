#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int p; 
            cin >> p; 
            mp[p]++;
        }
        bool check = true; 
        for(auto it : mp){
            if(it.second%2){
                check = false; 
                break; 
            }
        }
        check ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}