#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string str){
    if(str.substr(0, str.length()/2)==str.substr(str.length()/2, str.length())){
        return true;
    }
    else return false;
}

int main(){
    string str; 
    bool b = false; 
    cin >> str; 
    do{
        str = str.substr(0, str.length()-1); 
        b = check(str);
    }
    while(!(b || str.empty())); 
    cout << str.length() << endl; 
    return 0;
}