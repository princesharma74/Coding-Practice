#include<bits/stdc++.h>
using namespace std;
#define ll long long

int countDec(vector<int> &v){
    int n = v.size();
    int count = 0; 
    for(int i = 0; i < n; i++){
        if(v[i]!=1) continue;
        else{
            for(int j = i+1; j < n; j++){
                if(v[j]==0) count++;
            }
        }
    }
    return count;
}

int main(){
    int t; 
    cin >> t; 
    while(t--) {
        int n; 
        cin >> n; 
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        vector<int> v1_cpy(n), v2_cpy(n);
        v1_cpy = v;
        v2_cpy = v;
        for(int i = 0; i < n; i++){
            if(v[i] != 0) continue;
            else{
                v1_cpy[i] = 1;
                break;
            }
        }
        for(int i = n-1; i <= 0; i--){
            if(v[i] != 1) continue;
            else { v2_cpy[i] = 0; break; };
        }
        int max1 = max(countDec(v), countDec(v1_cpy));
        max1 = max(max1, countDec(v2_cpy));
        cout << max1 << endl; 
    }
    return 0;
}