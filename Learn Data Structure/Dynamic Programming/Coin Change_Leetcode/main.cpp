/*
Problem Link: https://leetcode.com/problems/coin-change/submissions/868182698/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int dp[10010]; 
int func(int amount, vector<int> &coins){
    // if the amount is zero, we will need zero coins.
    if(amount == 0) return 0; 
    // if the recursion is already calculated, don't calculate it again. 
    if(dp[amount] != -1) return dp[amount];
    // suppose infinite coins will be required to make up to the amount.
    int ans = INT_MAX; 
    // iterate through each of the coins.
    for(int coin : coins){
        // we are managing only positive amount, negative amount will be ignored. 
        if(amount - coin >= 0)
            // long is used because if it were not used it won't reach
            // maximum on adding 1 but it will become negative after getting overflow.
            ans = min(ans + 0ll, func(amount - coin, coins) + 1ll);
    }
    return dp[amount] = ans; 
}

int coinChange(vector<int> &coins, int amount){
    memset(dp, -1, sizeof(dp));
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans; 
}

int main(){
    memset(dp, -1, sizeof(dp));
    // let's say you got the amount of 15, and you have coins 10, 5, 1
    int amount;
    cin >> amount; 
    int n;
    cin >> n; 
    vector<int> coins;
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp; 
        coins.push_back(tmp);
    }
    cout << coinChange(coins, amount) << endl; 
    return 0;
}