#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t; 
    for(int i = 0; i < t; i++){
        int k, n; 
        cin >> k >> n; 
        int sum = 0; 
        for(int j = 0; j < k; j++){
            if((j + 1) + sum  > n){
                cout << (j + 1) + sum << " ";

            }
            sum +=j;
        }
        cout << endl; 
    }
    return 0;
}