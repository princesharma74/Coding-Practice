#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N, K; 
    cin >> N >> K; 
    multiset<int> s; 
    for(int i = 0; i < N; i++) {
        int temp; 
        cin >> temp; 
        s.insert(temp);
    }
    auto it = --s.end(); 
    int sum = 0; 
    for(int i = 0; i < K; i++){
        sum +=(*it);
        --it; 
    }
    cout << sum << endl; 
    return 0;
}