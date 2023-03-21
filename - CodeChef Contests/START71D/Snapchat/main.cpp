#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n;
        cin >> n; 
        vector<int> a(n);
        for(int &i : a) cin >> i; 
        vector<int> b(n); 
        for(int &i : b) cin >> i; 
        int count = 0; 
        int max = 0; 
        for(int i = 0; i < n; i++){
            if(a[i] && b[i]){
                count++; 
            }
            else{
                if(max < count) max = count; 
                count = 0; 
            }
        }
        if(max < count) max = count;
        cout << max << endl; 
    }
    return 0;
}