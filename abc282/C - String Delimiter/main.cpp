#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    cin >> N; 
    string str; 
    cin >> str; 
    int i = 0; 
    bool tog = true;
    while(str[i] != '\0'){
        if(str[i] == '"') tog = !tog;
        if(tog){
            if(str[i] == ','){
                str[i] = '.';
            }
        }
        i++; 
    }
    cout << str; 
    return 0;
}