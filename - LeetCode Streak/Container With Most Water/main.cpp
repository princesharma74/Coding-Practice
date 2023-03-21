#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int maxArea(vector<int>& height) {
    int l = 0, r = height.size() - 1;
    int maxarea = 0;
    while(r - l > 0){
        if(maxarea < (r-l)*(min(height[l], height[r]))){
            maxarea = (r-l)*(min(height[l], height[r]));
        }
        if(height[l] > height[r]){
            r--;
        }
        else{
            l++;
        }
    }
    return maxarea; 
}


int main(){
    vector<int> height{1,8,6,2,5,4,8,3,7};
    return 0;
}