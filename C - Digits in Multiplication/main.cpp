#include<bits/stdc++.h>
using namespace std;
#define ll long long

int digit(float N){
    return (int)log10(N) + 1; 
}

int main(){
    float N; 
    cin >> N; 
    map<float, float> mp; 
    for(int i = 1; i <= sqrt(N); i++){
        if(N/i - (int)N/i == 0) mp[max(digit(i), digit(N/i))] = i;
    }
    cout << max(digit(mp.begin()->first), digit(N/mp.begin()->second))<< endl;  
    return 0;
}