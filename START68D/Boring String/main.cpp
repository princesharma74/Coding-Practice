#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    while(t--){
        int N; 
        cin >> N; 
        string str; 
        cin >> str; 
        int len; 
        for(int i = 0; i < str.length(); i++){
            if(i > 0 && str[i] == str[i-1]){
                len = 2;
                while(i+1 < str.length() && str[i] == str[i+1]){
                    i++;
                    len++;
                }
                cout << str[i] << len << endl;
            }
        }
    }
    return 0; 
}