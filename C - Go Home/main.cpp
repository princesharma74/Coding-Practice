#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll X; 
    cin >> X; 
    if(X < 0) X*=(-1); 
    cout << ceil((-1 + sqrt(1+8*X))/2) << endl; 
    return 0;
}