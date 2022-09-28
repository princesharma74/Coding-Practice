#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str; 
    cin >> str; 
    int N = str.length(); 
    int i = 0, j = N - 1; 
    while(!(str[i] == 'A' && str[j] == 'Z')){
        --N; 
        if(str[i]!='A'){
            i++;
        }
        if(str[j]!='Z'){
            j--; 
        } 
    }
    cout << j - i + 1; 
    return 0;
}