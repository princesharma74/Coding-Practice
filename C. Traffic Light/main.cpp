#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t;
    for(int i = 0; i < t; i++){
        int n; 
        char c;
        cin >> n >> c; 
        string str; 
        cin >> str;
        map<int, int> v; 
        for(int j = 0; j < n; j++){
            if(str[j]==c) v[j];
        }
        int max = INT_MIN;
        for(auto k : v){
            int l = k.first; 
            int count = 0;
            while(str[l]!='g'){
                count++; 
                l++; 
                l%=n; 
            }
            if(max < count) max = count; 
            v[k.first] = count; 
        }
        cout << max << endl; 
        v.clear();
    }
    return 0;
}