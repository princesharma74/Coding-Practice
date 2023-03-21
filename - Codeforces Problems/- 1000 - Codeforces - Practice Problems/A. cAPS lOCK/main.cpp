#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

bool isUppercase(char c){
    return c >='A' && c <= 'Z';
}

bool isLowercase(char c){
    return c >='a' && c <= 'z';
}

int main(){
    //Problem Link: https://codeforces.com/problemset/problem/131/A
    /* Approach: */
    string str; 
    cin >> str;
    bool check = true;
    for(int i = 1; i < str.length(); i++){
        if(!isUppercase(str[i])){
            check = false;
            break;
        }
    }

    if(check){
        if(isLowercase(str[0])){
            str[0] -= ('a' - 'A');
        }
        else str[0] += ('a' - 'A');

        for(int i = 1; i < str.length(); i++){
            str[i] += ('a' - 'A');
        }
    }

    cout << str << endl;
    return 0;
}