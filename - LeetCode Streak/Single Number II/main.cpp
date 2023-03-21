#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(int i = 0; i < 32; i++){
        int bit = 1 << i; 
        int ct = 0; 
        for(int &it : nums){
            if(it & bit) ct++;
        }
        if(ct%3){
            ans |= bit;
        }
    }
    return ans;
}

int main(){
    //Problem Link: https://leetcode.com/problems/single-number-ii/
    /* Approach: */
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        vector<int> v(n);
        for(int &it : v) cin >> it;
        cout << singleNumber(v) << endl;
    }
    return 0;
}