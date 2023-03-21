#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int findMaxLength(vector<int>& nums) {
    int ct = 0; 
    int maxlen = 0; 
    map<int, int> mp; 
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]){
            ct++;
        }
        else{
            ct--;
        }
        if(ct == 0) maxlen = max(maxlen, i + 1);
        else if(mp.find(ct) == mp.end()){
            mp[ct] = i;
        }
        else{
            maxlen = max(maxlen, i - mp[ct]);
        }
    }
    return maxlen; 
}

int main(){
    //Problem Link: https://leetcode.com/problems/contiguous-array/description/
    /* Approach: */
    string str; 
    cin >> str; 
    vector<int> nums(str.length());
    for(int i = 0; i < str.length(); i++) nums[i] = str[i] - '0';
    cout << findMaxLength(nums) << endl; 
    return 0;
}