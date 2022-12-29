#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int A, B, C; 
        cin >> A >> B >> C; 
        if(A == (B+C)) cout << "YES" << endl; 
        else if(B == (A+C)) cout << "YES" << endl; 
        else if(C == (A+B)) cout << "YES" << endl; 
        else cout << "NO" << endl; 
    }
    return 0;
}