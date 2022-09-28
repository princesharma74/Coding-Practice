#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    const unsigned int M = 1000000007; 
    ll power = 1; 
    ll N; 
    cin >> N; 
    for(int i = 1; i <= N; i++){
        power = (power * i)%M; 
    }
    cout << power%M << endl; 
    return 0;
}