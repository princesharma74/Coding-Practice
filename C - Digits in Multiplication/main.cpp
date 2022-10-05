#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll digit(double N){
    return (ll)log10(N) + 1; 
}

int main(){
    double N; 
    cin >> N;
    map<double, double> mp; 
    for(ll i = 1; i <= sqrt(N); i++){
        if(N/i - (ll)N/i == 0) mp[max(digit(i), digit(N/i))] = i;
    }
    cout << max(digit(mp.begin()->first), digit(N/mp.begin()->second))<< endl;  
    return 0;
}