#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    string str; 
    cin >> str; 
    vector<char> v;
    for(int i = 0; i < str.length(); i+=2){
        v.push_back(str[i]);
    }
    sort(v.begin(), v.end());
    int j = 0; 
    for(int i = 0; i < str.length(); i+=2) { str[i] = v[j]; j++; }
    cout << str << endl; 
    return 0;
}