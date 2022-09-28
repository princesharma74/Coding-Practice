#include<bits/stdc++.h>
using namespace std;
#define ll long long

int manDist(int x1, int y1, int x2, int y2){
    return (abs(x1 - x2) + abs(y1 - y2)); 
}

int main(){
    int N, M; 
    cin >> N >> M; 
    vector<pair<int, int>> vN, vM; 
    int ta, tb; 
    for(int i = 0; i < N; i++){
        cin >> ta >> tb; 
        vN.push_back({ta, tb}); 
    }
    for(int i = 0; i < M; i++){
        cin >> ta >> tb; 
        vM.push_back({ta, tb}); 
    }

    vector<int> ans; 

    for(int i = 0; i < N; i++){
        multimap<int, int> mp; 
        for(int j = 0; j < M; j++){
            mp.insert({manDist(vN[i].first, vN[i].second, vM[j].first, vM[j].second), j}); 
        }
        ans.push_back(mp.begin()->second + 1); 
    }
    
    for(int &i : ans){
        cout << i << endl; 
    }
    return 0;
}