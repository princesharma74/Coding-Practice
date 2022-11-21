#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    int alp[26];
    while(t--){
        int n; 
        cin >> n; 
        string s; 
        cin >> s;
        char max = s[0];
        for(int i = 1; i < s.length(); i++){
            if(max < s[i] ){
                max = s[i];
            }
        }
        cout << (max - 'a' + 1) << endl; 
    }
    return 0;
}