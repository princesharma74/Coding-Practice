#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N, M; 
    cin >> N >> M; 
    int city[N] = {0}; 
    for(int i = 0; i < M; i++){
        int ta, tb; 
        cin >> ta >> tb; 
        city[ta-1]++; 
        city[tb-1]++; 
    }
    for(int i = 0; i < N; i++) cout << city[i] << endl; 
    return 0;
}