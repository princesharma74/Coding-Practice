#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N, K; 
    cin >> N >> K; 
    int a, b; 
    map<int, int> mp; 
    for(int i = 0; i < N; i++){
        cin >> a >> b; 
        mp[a] += b; 
    }
    int sum = 0; 
    for(auto &it : mp){
        if(K > sum && K <= sum + it.second){
            cout << it.first; 
            break; 
        }
        sum+=(it.second); 
    }
    return 0;
}