#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int W, a, b; 
    cin >> W >> a >> b; 
    if(b + W < a){
        cout << a - b - W << endl; 
    }
    else if(b + W > a && b + W < a + W){
        cout << 0 << endl; 
    }
    else if(b > a && b < a + W){
        cout << 0 << endl;
    }   
    else if(b + W == a || b == a || a + W == b){
        cout << 0 << endl; 
    }
    else if(b > a + W){
        cout << b - a - W << endl; 
    }
    return 0;
}