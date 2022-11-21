#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    cin >> N; 
    vector<int> v(N);
    for(int i = 0; i < N; i++) cin >> v[i];
    int i = N - 1; 
    while(i >= 0){
        cout << v[i] <<" ";
        i-=2; 
    }
    i == -2 ? i = 1 : i = 0; 
    while(i < N-1){
        cout << v[i] <<" ";
        i+=2;
    }
    return 0; 
}