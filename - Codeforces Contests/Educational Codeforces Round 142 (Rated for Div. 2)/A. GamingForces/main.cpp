#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        int ct_1 = 0; 
        for(int i = 0; i < n; i++){
            int tmp; 
            cin >> tmp; 
            if(tmp == 1) ct_1++; 
        }
        cout <<(  (ct_1/2) + (n - ct_1 + ct_1%2)  )<< endl; 
    }
    return 0;
}