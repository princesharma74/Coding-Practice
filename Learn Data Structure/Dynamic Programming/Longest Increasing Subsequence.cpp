#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

int dp[N]; 

int fun(int i, vector<int> &nums){
    int ans = 1; 
    for(int j = 0; j < i; j++){
        if(nums[j] < nums[i]) ans = max(ans, fun(j, nums) + 1);
    }
    return ans; 
}

int lengthOfLIS(vector<int>& nums) {
    int ans = 1; 
    int n = nums.size(); 
    for(int i = 0; i < n; i++){
        ans = max(ans, fun(i, nums));
    }
    return ans; 
}

void solve(){
    memset(dp, 0, sizeof(dp));
    vector<int> nums{10, 9, 2, 5, 3, 7, 101, 18};
    cout << lengthOfLIS(nums) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}