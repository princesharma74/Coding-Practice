#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        int m, s; 
        cin >> m >> s;
        bool check = true;
        map<int, int> mp;
        for(int i = 0; i < m; i++){
            int e; 
            cin >> e; 
            if(mp[e]==0 && e > 0) mp[e]++; else {
                check = false; 
                break;
            }
        }
        if(check){ 
            int sum = 0, Tp;
            Tp = (--mp.end())->first;
            for(int i = 1; i <= Tp; i++){
                if(mp.find(i) == mp.end()){
                    sum+=i;
                }
            }
            if(sum == s) check = true;
            else if(sum > s){
                check = false;
            }
            else{
                check = false;
                for(int i = Tp + 1; i <= 50; i++){
                    sum+=i;
                    if(sum == s){
                        check = true; 
                        break; 
                    }
                }
            }
        }
        check ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}