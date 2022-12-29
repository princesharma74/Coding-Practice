#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str; 
    cin >> str; 
    int N = str.length(); 
    bool check = true; 
    if(( str[0] >= 'A' && str[0] <= 'Z' ) && (str[N-1] >= 'A' && str[N-1] <= 'Z') && (str[1] >= '1' && str[1] <= '9')){
        for(int i = 2; i < N-1; i++){
            if(!( str[i] >= '0' && str[i] <= '9' )){
                check = false; 
                break;
            }
        }
    }
    else check = false; 
    check ? cout << "Yes" << endl : cout << "No" << endl; 
    return 0;
}