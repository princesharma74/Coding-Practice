#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        string str; 
        cin >> str; 
        int R[] = {'Y', 'e', 's'};
        int start = 0; 
        if(str[0] == 'Y') start = 0;
        else if(str[0] == 'e') start = 1;
        else if(str[0] == 's') start = 2;
        bool check = true; 
        
        for(int i = 0; i < str.length(); i++){
            char exp = R[(( i%3 ) + start)%3];
            if(exp != str[i]) { check = false; break; } 
        }
        check ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}