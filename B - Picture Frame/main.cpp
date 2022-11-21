#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N, W; 
    cin >> N >> W; 
    string arr[N]; 
    for(int i = 0; i < N; i++) cin >> arr[i]; 

    N+=2; W+=2; 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < W; j++){
            if(i == 0 || i == N-1 || j == 0 || j == W-1) cout << "#"; 
            else cout << arr[i-1][j-1]; 
        }
        cout << endl; 
    }
    return 0;
}