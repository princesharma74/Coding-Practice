#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define loop(i,n)  for(ll i=0; i<n; i++)
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans; 
    set<vector<int>> st;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) cout << nums[i] << " ";
    cout << endl; 
    int zeros = 0, k = 0, neg = -1, pos = -1;
    for(int k = 0; k < nums.size(); k++){
        if(nums[k] < 0) neg++;
        if(nums[k] == 0) zeros++;
    }
    // when neg == -1 invalid index, That means no negative exists. Same for pos
    // when zeros == 0, that means no zeros exists.
    if(neg < 0){
        if(zeros < 3) return ans;
        else return vector<vector<int>>(1, vector<int>{0,0,0});
    }
    else{
        // if some positive exists too.
        if (neg + zeros + 1 < nums.size()){
            pos = neg + zeros + 1;
            // we have both negative as well as positives. 
            int i = pos, j = neg; 
            
            // case 1: 2 -ve, 1 +ve
            while(j - 1>=0 && i < nums.size()){
                if(abs(nums[j - 1] + nums[j]) == nums[i]){
                    ans.push_back(vector<int>{nums[j-1], nums[j], nums[i]});
                    i++; j--;
                }
                else if(abs(nums[j - 1] + nums[j]) > nums[i]){
                    i++;
                }
                else{
                    j--;
                }
            }

            i = pos; j = neg; 
            // case 2: 1 -ve, 2 +ve
            while(i + 1 < nums.size() && j >= 0){
                if(nums[i] + nums[i+1] == abs(nums[j])){
                    ans.push_back(vector<int>{nums[j], nums[i], nums[i+1]});
                    i++; j--;
                }
                else if(nums[i+1] + nums[i] < abs(nums[j])){
                    i++;
                }
                else{
                    j--;
                }
            }

            // case 3: 0, 1 +ve , 1 -ve
            if(zeros > 0){
                i = pos; j = neg;
                while(j >= 0 && i < nums.size()){
                    if(nums[i] == abs(nums[j])){
                        ans.push_back(vector<int>{nums[j], 0, nums[i]});
                        i++; j--;
                    }
                    else if(nums[i] > abs(nums[j])) j--;
                    else i++;
                }
            }
        }
        else{
            if(zeros < 3) return ans; 
            else return vector<vector<int>>(1, vector<int>{0,0,0});
        }
    }

    for(auto it : ans) st.insert(it);
    ans.clear();
    for(auto it: st) ans.push_back(it);
    return ans; 
}

int main(){
    //Problem Link: https://leetcode.com/problems/3sum/
    /* Approach: */
    vector<int> v{-1,0,1,2,-1,-4,-2,-3,3,0,4};
    vector<vector<int>> ans = threeSum(v);
    cout << "[" << endl; 
    for(auto it : ans){
        for(int i = 0; i < it.size(); i++) cout << it[i] << " ";
        cout << endl; 
    }
    cout << "]";
    return 0;
}