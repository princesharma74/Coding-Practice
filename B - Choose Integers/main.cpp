#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int A, B, C; 
    cin >> A >> B >> C; 
    unordered_map<int, int> mp; 
    int k = 1; 
    while(mp[(k*A)%B] == 0){
        mp[(k*A)%B]++; 
        k++; 
    }
    if(mp[C%B]>0) cout << "YES"; 
    else cout << "NO"; 
    return 0; 
}