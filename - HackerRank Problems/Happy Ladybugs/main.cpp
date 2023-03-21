#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

string happyLadybugs(string b) {
    bool un_ex = false; 
    for(char c : b){
        if(c == '_') {
            un_ex = true;
            break;
        }
    }
    int let[26] = {0};
    if(un_ex){
        for(char c : b){
            if(c != '_')
            let[c-'A']++;
        }
        for(int i = 0; i < 26; i++){
            if(let[i] == 1){
                return "NO"; 
            }
        }
        return "YES";
    }
    else{
        char curr_el = b[0]; 
        int mn = 2; 
        int ct = 1;
        for(int i = 1; i < b.length(); i++){
            if(curr_el == b[i]){
                ct++;
            }
            else{
                mn = min(ct, mn); 
                ct = 1; 
                curr_el = b[i]; 
            }
        }
        mn = min(ct, mn);
        if(mn > 1) return "YES"; 
        else return "NO";
    }
}

int main(){
    //Problem Link: https://www.hackerrank.com/challenges/happy-ladybugs/problem
    int g; 
    cin >> g; 
    while(g--){
        int n; 
        cin >> n;
        string str; 
        cin >> str; 
        cout << happyLadybugs(str) << endl; 
    }
    return 0;
}