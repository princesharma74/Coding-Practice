#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here
    int looked; 
    cin >> looked; 
    vector<pair<int, int>> m; 
    for(int i = 0; i < looked; i++){
        int t_a, t_b; 
        cin >> t_a >> t_b; 
        m.push_back({t_a, t_b}); 
    }

    pair<int, int> sum = m[0]; 
    for(int i = 1; i < looked; i++){    
        if(sum.first > m[i].first || sum.second > m[i].second){
            int j = 2; 
            while(sum.first > j*m[i].first || sum.second > j*m[i].second){
                j++; 
            }
            sum = {j * m[i].first,  j * m[i].second};
        }
        else{
            sum = m[i]; 
        }
    }

    cout << sum.first + sum.second; 
    return 0;
}