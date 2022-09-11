#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here
    int N; 
    const unsigned int M = 1000000007;
    cin >> N;
    map<int, int> mp; 
    for(int i = 0; i < N; i++){
        mp[abs(N - 2*i - 1)]++; 
    }

    ll sum = 1; 
    for(int i = 0; i < N; i++){
        int temp; 
        cin >> temp; 
        if(mp.find(temp) != mp.end()){
            if(mp[temp] != 0){
                sum*=mp[temp] % M; 
                --mp[temp]; 
            }
            else{
                sum = 0; 
                break; 
            }
        }
        else{
            sum = 0; 
            break; 
        }
    }
    cout << sum % M; 
    return 0;
}