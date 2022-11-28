#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int h, m, H, M; 
    cin >> h >> m;
    int mt = 24*60;
    int A, B, C, D; 
    for(int i = 0; i < mt; i++){
        H = (h + (m + i)/60)%24;
        M = (( m + i )%60);
        A = H/10;
        B = H%10; 
        C = M/10;
        D = M%10;

        if(A*10 + C < 24 && B*10 + D < 60) break; 
        else continue;
    }
    cout << H << " " << M << endl; 
    return 0;
}