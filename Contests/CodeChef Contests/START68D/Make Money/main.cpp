#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int N, X, C, count = 0, sum = 0, cost = 0; 
        cin >> N >> X >> C;
        for(int i = 0; i < N; i++){
            int A;
            cin >> A; 
            if(C < X - A){
                count++; sum+=X; cost+=C; 
            }
            else sum+=A;
        }
        cout << (sum - cost) << endl; 
    }
    return 0;
}