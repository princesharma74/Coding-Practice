#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

void solve(){
    int n; 
    cin >> n; 
    int Ra = 0, Pa = 0, Sa = 0; 
    cin >> Ra >> Pa >> Sa;
    int Rb = 0, Pb = 0, Sb = 0; 
    string str; 
    cin >> str; 
    for(char c : str){
        if(c == 'R') Rb++; 
        else if(c == 'S') Sb++; 
        else if(c == 'P') Pb++; 
    }
    if(min(Ra, Sb) + min(Pa, Rb) + min(Sa, Pb) < ((Ra + Pa + Sa)/2 + (Ra + Pa + Sa)%2)){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    string ans; 
    for(char c : str){
        if(c == 'R'){
            if(Pa > 0){
                ans.push_back('P'); 
                Pa--;
            }
            else ans.push_back('_');
        }
        else if(c == 'S'){
            if(Ra > 0){
                ans.push_back('R'); 
                Ra--;
            }
            else ans.push_back('_');
        }
        else if(c == 'P'){
            if(Sa > 0){
                ans.push_back('S'); 
                Sa--; 
            }
            else ans.push_back('_');
        }
    }
    for(int i = 0; i < ans.length(); i++){
        if(ans[i] == '_'){
            if(Ra > 0){
                ans[i] = 'R'; 
                Ra--; 
            }
            else if(Pa > 0){
                ans[i] = 'P'; 
                Pa--;
            }
            else if(Sa > 0){
                ans[i] = 'S';
                Sa--;
            }
        }
    }
    cout << ans << endl;
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