#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    double A, B; 
    cin >> A >> B; 
    if(A > B) cout << "GREATER"; 
    else if(A < B) cout << "LESS"; 
    else cout << "EQUAL"; 
    return 0;
}