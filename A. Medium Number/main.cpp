#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    set<int> s; 
    while(t--){
        int temp; 
        for(int i = 0; i < 3; i++){
            cin >> temp;
            s.insert(temp);
        }
        auto it = s.begin(); 
        advance(it, 1);
        cout << *it << endl; 
        s.clear();
    }
    return 0;
}