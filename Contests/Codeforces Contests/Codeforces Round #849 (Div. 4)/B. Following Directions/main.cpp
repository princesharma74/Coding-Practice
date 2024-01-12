#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/contest/1791/problem/B
    /* Approach: */
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n; 
        string str; 
        cin >> str; 
        int x = 0, y = 0; 
        bool check = false; 
        for(char c : str){
            if(c == 'U'){
                y++;
            }
            else if(c == 'L'){
                x--;
            }
            else if(c == 'R'){
                x++;
            }
            else{
                y--;
            }
            if(x == 1 && y == 1){
                check = true; 
                break;
            }
        }
        check ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}