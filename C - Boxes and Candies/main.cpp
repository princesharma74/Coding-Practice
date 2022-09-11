#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here
    ll N, x, temp, diff; 
    ll count = 0; 
    vector<ll> B;
    cin >> N >> x; 
    for(ll i = 0; i < N; i++){
        ll temp; 
        cin >> temp; 
        B.push_back(temp); 
    }

    for(ll i = 0; i < N - 1; i++){
        if(B[i] + B[i+1] > x){
            count += (B[i] + B[i+1] - x); 
            diff = B[i] + B[i+1] - x; 
            if(B[i] <= B[i+1]){
                B[i+1]-=diff; 
                if(B[i+1]<0){
                    B[i]+=B[i+1]; 
                    B[i+1] = 0; 
                }
            }else{
                B[i]-=diff; 
                if(B[i] < 0){
                    B[i+1]+=B[i]; 
                    B[i] = 0; 
                }
            }
        }
        /*
        while (B[i] + B[i+1] > x)
        {
            if(B[i] > B[i+1]){
                --B[i]; 
            }
            else{
                --B[i+1]; 
            }
            count++; 
        }
        */
    }
    

    cout << count << endl; 
    return 0;
}