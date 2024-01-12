#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        vector<int> v(n);
        map<int, int> m1, m2; 
        for(int i = 0; i < n; i++){
            cin >> v[i];
            m1[v[i]]++;
        }
        int ct = 0; 
        for(int i = (n-1); i >= 0; i--){
            m1[v[i]]--; 
            if(m1[v[i]+1]){
                ct-=1; 
                m2[v[i]+1]++; 
            }
            if(m2[v[i]]){
                ct+=1;
            }
            cout << ct << " ";
        }
        cout << endl; 
    }
    return 0;
}