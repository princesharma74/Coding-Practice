#include<bits/stdc++.h>
using namespace std; 
int main(){
    int N; 
    cin >> N; 
    while(true){
        N++;
        int evenC = 0, oddC = 0; 
        unordered_map<int, int> mp;
        int N1 = N; 
        while(N1){
            int r = N1%10;
            mp[r]++;
            N1/=10;
        }
        bool check1 = true, check2 = true; 
        for(auto p : mp){
            if (p.first != p.second){
                check1 = false;
                break; 
            }
            if(p.first%2==0) evenC++;
            else oddC++;
        }
        if(evenC!=oddC) check2 = false; 
        if(check1&check2) break; 
    }
    cout << N << endl;
    return 0;
}