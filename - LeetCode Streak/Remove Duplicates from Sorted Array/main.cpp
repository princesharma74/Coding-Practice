#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
/* Approach: */
int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 1) return 1;
    int ct = 1;
    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] != nums[i+1]) ct++; 
    }
    return ct; 
}

void solve(){
    vector<int> nums{1,1,2};
    cout << removeDuplicates(nums) << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}