#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        int A, C; 
        cin >> A >> C; 
        if((A + C)%2==0){
            cout << (A + C)/2 << endl; 
        }
        else cout << -1 << endl;
    }
    return 0;
}