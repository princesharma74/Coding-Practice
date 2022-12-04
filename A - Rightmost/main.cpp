#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str; 
    cin >> str;
    regex reg("[a]");
    if(regex_search(str, reg)){
        for(int i = str.length() - 1; i >= 0; i--){
            if(str[i] == 'a'){
                cout << i+1 << endl; break;
            }
        }
    }
    else cout << -1 << endl; 
    return 0;
}