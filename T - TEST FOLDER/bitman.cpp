#include<bits/stdc++.h>
using namespace std; 
int main(){
    bitset<8> b1;
    bitset<8> b2;
    cin >> b1; 
    cout << b1 << endl; 
    cin >> b2; 
    cout << b2 << endl; 
    cout << (b1|b2);
    return 0; 
}