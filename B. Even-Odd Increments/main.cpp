#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; 
    cin >> t; 
    for(ll i = 0; i < t; i++){
        ll n, q; 
        cin >> n >> q;
        ll ev_sum = 0, ct_ev = 0;
        ll od_sum = 0, ct_od = 0; 
        for(ll j = 0; j < n; j++){
            ll tmp; 
            cin >> tmp; 
            if(tmp%2==0){
                ev_sum+=tmp;
                ct_ev++; 
            } 
            else{
                od_sum+=tmp; 
                ct_od++;
            }
        }

        for(ll j = 0; j < q; j++){
            ll b = 0, value; 
            cin >> b >> value;
            if(!b){
                ev_sum+=(ct_ev*value);
                if(value%2){
                    ct_od +=ct_ev;
                    ct_ev = 0; 
                }
            }
            else{
                od_sum+=(ct_od*value);
                if(value%2){
                    ct_ev+=ct_od; 
                    ct_od = 0; 
                }
            }
            cout << (ev_sum + od_sum) << endl; 
        }
    }
    return 0;
}