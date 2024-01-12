#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679"; 
    int t; 
    cin >> t; 
    while(t--){
        string str; 
        cin >> str; 
        int i = 0; 
        while(str[i] == pi[i]) i++;
        cout << i << endl; 
    }
    return 0;
}