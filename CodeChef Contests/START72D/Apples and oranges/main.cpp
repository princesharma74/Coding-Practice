#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        for(int i = 2; i*i < n; i++){
            if(n%i == 0) cout << i << " ";
        }
        cout << endl; 
    }
    return 0;
}