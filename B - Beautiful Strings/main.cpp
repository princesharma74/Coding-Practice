#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here
    map<char, int> mp; 
    string str; 
    cin >> str;
    int i = 0; 
    while(str[i]!='\0'){
        mp[str[i]]++; 
        i++; 
    }

    bool f = true; 
    for(int j = 0; j < i; j++){
        if(mp[str[j]]%2!=0){
            f = false;
            break; 
        }
    }

    f ? cout << "Yes\n" : cout << "No\n"; 

    return 0;
}