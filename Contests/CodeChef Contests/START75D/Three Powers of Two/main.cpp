#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        string str; 
        cin >> str; 
        int ct = 0; 
        for(char c : str){
            if(c == '1') ct++;
        }

        if(ct == 1){
            if(str[n-1] == '1' || str[n-2] == '1' || str[n-3] == '1') cout << "NO" << endl; 
            else cout << "YES" << endl; 
        }
        else if(ct == 2){
            cout << "YES" << endl; 
        }
        else if(ct == 3) cout << "YES" << endl; 
        else cout << "NO" << endl;
    }
    return 0;
}