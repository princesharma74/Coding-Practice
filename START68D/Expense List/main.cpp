#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int N, X; 
        cin >> N >> X; 
        X = (1<<X); 
        for(int i = 0; i < N; i++){
            X/=2;
        }
        cout << X << endl; 
    }
    return 0;
}