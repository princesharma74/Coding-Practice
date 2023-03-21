#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int thirdMax(vector<int> &nums){
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int INT_MIN_exists = 0; 
    for(int num : nums){
        if(max1 < num){
            max3 = max2;
            max2 = max1; 
            max1 = num; 
        }
        else if(max2 < num && num < max1){
            max3 = max2;
            max2 = num;
        }
        else if(max3 < num && num < max2){
            max3 = num;
        }

        if(num == INT_MIN) INT_MIN_exists++;
    }

    if(INT_MIN_exists){
        if(max2 == INT_MIN) return max(max1, max2);
        else return max3;
    }
    else return max3 == INT_MIN ? max(max1, max2) : max3;
}

int main(){
    //Problem Link: https://leetcode.com/problems/third-maximum-number/
    /* Approach: */
    vector<int> v{1,2,2,5,3,5};
    cout << thirdMax(v) << endl; 
    return 0;
}