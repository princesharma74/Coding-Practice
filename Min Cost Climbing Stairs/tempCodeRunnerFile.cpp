int minCostClimbingStairs(vector<int>& cost) {
    if(cost.size() == 2) return min(cost[0], cost[1]);
    int idx = -1; 
    int minCost = 0;
    while(idx + 1 != cost.size() && idx + 2 != cost.size() && idx + 4 != cost.size()){
        if (cost[idx + 1] < cost[idx + 2]){
            minCost += cost[idx + 1];
            idx += 1;
        }
        else{
            minCost += cost[idx + 2];
            idx += 2;
        }
    }
    if(idx + 4 == cost.size()){
        minCost += (min(min(cost[idx+1] + cost[idx+2], cost[idx+1]+cost[idx+3]), cost[idx+2]));
    }
    return minCost;
} 