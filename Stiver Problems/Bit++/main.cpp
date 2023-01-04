#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*
Problem Link: https://codeforces.com/problemset/problem/282/A
Approach: 
Simply use increment and decrement operator either post/pre depending on what input is there
*/
int main(){
    int n; 
    cin >> n; 
    int x = 0; 
    while(n--){
        string str; 
        cin >> str; 
        if(str[0] == 'X'){
            if(str[1] == '-'){
                x--;
            }
            else{
                x++;
            }
        }
        else{
            if(str[0] == '-'){
                --x; 
            }
            else{
                ++x; 
            }
        }
    }
    cout << x << endl; 
    return 0;
}