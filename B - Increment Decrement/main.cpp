#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    cin >> N;
    string str; 
    cin >> str;
    int max = 0, temp; 
    int max_value = 0; 
    for (int i = 0; i < N; i++){
        if(str[i] == 'I') max++; 
        if(str[i] == 'D') max--; 
        if(max > max_value) max_value = max; 
    }
    cout << max_value << endl; 
    
    return 0;
}