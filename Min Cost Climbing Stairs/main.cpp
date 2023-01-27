#include<bits/stdc++.h>
using namespace std;
#define ll long long

int minCostClimbingStairs(vector<int> &cost){
    if(cost.size() == 2) return min(cost[0], cost[1]);
    int idx = -1; 
    int total = 0;
    while(idx + 1  || idx + 2)
}


int main(){
    int n; 
    cin >> n; 
    vector<int> cost(n);
    for(int &it : cost) cin >> it;
    cout << minCostClimbingStairs(cost);
    return 0;
}