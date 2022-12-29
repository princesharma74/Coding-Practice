/*
Problem Link: https://atcoder.jp/contests/abc283/tasks/abc283_c
Approach: 
1. Count all number of characters. 
2. if found 0, use separate algorithm to count differently. Count all zeroes. 
3. Count as ct/2 + ct%2 where ct is the number of zeros.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str; 
    cin >> str; 
    int i = 0; 
    int count = 0; 
    while(str[i] != '\0'){
        if(str[i] == '0'){
            int ct = 0; 
            while(str[i] == '0'){
                ct++;
                i++;
            }
            count+= ( ct/2 + ct%2 ); 
        }
        else{  count++; i++; }
    }
    cout << count << endl; 
    return 0;
}