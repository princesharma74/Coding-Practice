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

void solve(){
    string str; 
    cin >> str; 
    int usa = 0;
    bool check = true;
    int plus = 0, minus = 0;
    for(char c : str){
        if(c == '0'){
            if(plus - minus < 2){
                check = false;
                break; 
            }
            if(usa == 0) usa++;
        }
        else if(c == '1'){
            if(usa > 0){
                check = false; 
                break;
            }
        }
        else if(c == '+'){
            if(usa > 0) usa++;
            plus++; 
        }
        else if(c == '-'){
            if(usa > 0) usa--;
            minus++; 
        }
    }
    cout << (check ? "YES" : "NO") << endl; 
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