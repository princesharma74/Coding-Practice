#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/281/A
    string str; 
    cin >> str; 
    if(str[0] >= 'a' && str[str.length() - 1] <= 'z'){
        str[0] -= ('a' - 'A');
    }
    cout << str << endl; 
    return 0;
}