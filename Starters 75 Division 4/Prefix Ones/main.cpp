#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int longestOnes(string str){
    bool countOn;
    int max = 0;
    int ct = 0; 
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){
            countOn = true; 
            if(i == str.length() - 1){
                if(max < ct + 1){
                    max = ct + 1; 
                }
            }
        }
        else if(i != 0){
            if(max < ct) max = ct;
            ct = 0;
            countOn = false; 
        }
        if(countOn) ct++;
    }
    return max;
}

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        string str; 
        cin >> str; 

        if(str[0] == '0'){
            cout << longestOnes(str) << endl; 
        }
        else{
            int i = 0; 
            while(str[i] == '1' && i < n){
                i++;
            }
            if(i != n) cout << (longestOnes(str.substr(i, n - i)) + i) << endl; 
            else cout << n << endl; 
        }
    }
    return 0;
}