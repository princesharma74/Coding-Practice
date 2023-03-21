#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int findDuplicate(vector<int>& nums) {
    int n = nums.size() - 1; 
    long actualSum = n*(n + 1)/2; 
    long sum = 0; 
    for(int &it : nums) sum += it; 
    return (sum - actualSum);
}

//Problem Link: https://leetcode.com/problems/find-the-duplicate-number/description/
/* Approach: */
void solve(){
    vector<int> nums = {1,3,4,2,2}; 
    cout << findDuplicate(nums) << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}