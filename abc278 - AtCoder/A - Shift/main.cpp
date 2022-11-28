#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N, K;
    cin >> N >> K; 
    if (K > N) K = N; 
    int arr[N];
    for(int i = 0; i < N; i++) cin >> arr[i];
    for(int i = K; i < N; i++){
        cout << arr[i] << " ";
    }
    for(int i = 0; i < K; i++) cout << 0 << " ";
    return 0;
}