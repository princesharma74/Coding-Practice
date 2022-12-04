#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    cin >> N; 
    vector<int> v(N);
    for(int i = 0; i < N; i++) cin >> v[i]; 
    prev_permutation(v.begin(), v.end());
    for(int i = 0; i < N; i++) cout << v[i] << " ";
    return 0;
}