#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    int maxsum=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        maxsum=max(sum,maxsum);
        if(sum<0) sum=0;
    }
    return maxsum;
}

int main(){
    //Problem Link: https://leetcode.com/problems/maximum-subarray/description/
    /* Approach: */
    vector<int> nums{0,-3,1,1};
    cout << maxSubArray(nums);
    return 0;
}