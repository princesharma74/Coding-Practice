#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int l = 0, r = n - 1; 
        bool check = false;
        while(l<=r){
            if(!l && r!= n-1){
                if(v[l-1] > v[l] && v[r+1] > v[r]){
                    bool alleq = equal(advance(v.begin(), l), advance(v.begin(), r - 1), advance(v.begin(), l));
                    for(int i = l; i <= r; i++){
                        if(v[i]!=v[l]){
                            alleq = false;
                            break;
                        }
                    }
                    if(alleq){
                        check = true;
                        break; 
                    }
                }
            }
            else{
                if(l == 0 && r == n-1) {
                    check = equal(v.begin() + 1, v.end(), v.begin());
                    if(check) break; 
                }
                else if(l==0 && r!= n - 1){

                }
            }
            l+=1;
            r-=1;
        }
    }
    return 0;
}