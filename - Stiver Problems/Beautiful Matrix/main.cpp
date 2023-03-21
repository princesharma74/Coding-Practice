#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int _i, _j; 
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int tmp; 
            cin >> tmp; 
            if(tmp){
                _i = i; 
                _j = j; 
            }
        }
    }
    cout << abs(2 - _i) + abs(2 - _j) << endl;
    return 0;
}