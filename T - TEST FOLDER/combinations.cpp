#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // for(int i = 1; i <=9; i++){
    //     for(int j = i; j <=9; j++){
    //         if(i!=j)
    //         cout << "("<< i <<", " <<j<<")" << endl; 
    //     }
    // }
    bitset<8> b1("0101"), b2("1010");
    cout << (b1|b2) << endl; 
    cin >> b1 >> b2;
    cout << (b1|b2) << endl; 
    return 0;
}