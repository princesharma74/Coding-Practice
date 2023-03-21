#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://leetcode.com/problems/3sum/
/* Approach: */
vector<vector<int>> threeSum(vector<int> &nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    set<vector<int>> st; 
    for(int k = 0; k < n; k++){
        int tgt = (-1)*(*(nums.begin()+k));
        nums.erase(nums.begin()+k);
        // using two sum approach to find the target
        int i = 0, j = nums.size()-1; 
        // nums[k] is our target
        while(j > i){
            if(( nums[i] + nums[j] ) > tgt) j--; 
            else if( ( nums[i] + nums[j] ) < tgt ) i++;
            else{
                vector<int> in = {nums[i], (-1)*tgt, nums[j]};
                sort(in.begin(), in.end());
                st.insert(in);
                break;
            }
        }
        nums.insert(nums.begin() + k, (-1)*tgt);
    }
    vector<vector<int>> ans; 
    for(auto it : st) ans.push_back(it);
    return ans; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        vector<int> nums{-1,0,1,2,-1,-4};
        vector<vector<int>> ans = threeSum(nums);
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i][0] << ", " << ans[i][1] << ", " << ans[i][2] << endl; 
        }
    }
    return 0;
}