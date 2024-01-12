#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str; 
    cin >> str; 
    regex reg("[a]{2,}");
    smatch m; 
    regex_search(str, m, reg);
    for(auto x : m){
        cout << x << endl; 
    }
    return 0;
}