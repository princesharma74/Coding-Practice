#include<bits/stdc++.h>
using namespace std; 

// Problem Link: https://atcoder.jp/contests/abc042/tasks/abc042_b

bool IrohaHatesThis(vector<int> &v, int a){
    int d; 
    while(a){
        d = a%10; 
        for(int &num : v){
            if(num == d){
                return true;
            }
        }
        a/=10; 
    }
    return false; 
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    int topay, h; 
    cin >> topay >> h; 
    vector<int> a; 
    for(int i = 0; i < h; i++) {
        int temp;
        cin >> temp; 
        a.push_back(temp); 
    }
    while(IrohaHatesThis(a, topay)){
        ++topay; 
    }
    cout << topay; 
    return 0; 
}