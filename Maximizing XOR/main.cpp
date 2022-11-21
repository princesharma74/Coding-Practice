#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int l, r; 
    set<int> s; 
    cin >> l >> r; 
    int max = 0; 
    for(int i = l; i <= r; i++){
        for(int j = l; j <= r; j++){
            if(max < (i ^ j)){
                max = i ^ j; 
            }
        }
    }
    cout << max << endl;
    return 0;
}