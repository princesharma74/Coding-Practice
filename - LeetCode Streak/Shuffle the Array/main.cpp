#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

vector<int> shuffle(vector<int>& nums, int n) {
    int rp = 1;
    for(int i = n; i<2*n; i++){
        int sv = nums[i];
        nums.erase(nums.begin()+i);
        nums.insert(nums.begin() + rp, sv);
        rp += 2;
    }
    return nums;
}

int main(){
    //Problem Link: https://leetcode.com/problems/shuffle-the-array/description/
    /* Approach: */
    vector<int> nums{2,5,1,3,4,7};
    int n = 3;
    vector<int> v = shuffle(nums, n);
    for(int i = 0; i < 2*n; i++){
        cout << v[i] << " ";
    }
    return 0;
}