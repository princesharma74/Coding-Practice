#include <bits/stdc++.h>
using namespace std;

int main() {
    
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin); 
    freopen("../output.txt", "w", stdout); 
    #endif
    
    int W, H; 
    cin >> H >> W;
    vector<string> ca;
    for(int i = 0; i < H; i++){
        string str; 
        cin >> str; 
        ca.push_back(str); 
    }

    for(int i = 0; i < 2*H; i++){
        for(int j = 0; j < W; j++){
            cout << ca[i/2][j]; 
        }
        cout << endl; 
    }

	return 0;
}