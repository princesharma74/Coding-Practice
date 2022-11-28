#include <bits/stdc++.h>
using namespace std; 

int anagram(string s){
    int x=s.size(),count=0;
    if(x%2==1){
        return -1;
    }
    else {
        for(int i=0;i<x/2;i++){
            for(int j=x/2;j<x;j++){
                if(s[i]==s[j]){
                    s[j]=0;
                    count++;
                    break;
                }
            }
            
        }
        return ((x/2)-count);
    }
}

int main(){
    int t;
    cin >> t; 
    while(t--){
        string s; 
        cin >> s; 
        cout << anagram(s) << endl;
    }
    return 0;
}