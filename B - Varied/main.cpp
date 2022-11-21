#include <bits/stdc++.h>
using namespace std; 

int main(){
    string str; 
    cin >> str; 
    int L[26] = {0};
    bool check = true;  

    for(char &c : str){
        if(c > 96 && c < 123){
            if(!L[c-97]) L[c-97]++;
            else{
                check = false;
                break; 
            }
        }
    }
    if(check) cout << "yes"; 
    else cout << "no"; 
    return 0;
}