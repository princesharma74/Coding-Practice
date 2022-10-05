#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> S; 

void search(vector<int> &subset, int i, vector<int> &nums){
    // base condition
    // if all the elements of the main S are used.
    if(i == nums.size()){
        S.push_back(subset); 
        return; 
    }
    // if the ith element is not chosen the subset, go ahead for the next level of the tree
    search(subset, i+1, nums); 
    // if ith element is chosen to be in the subset, first add the element and go ahead for the next level
    subset.push_back(nums[i]); 
    search(subset, i+1, nums); 
    // to backtrack
    subset.pop_back(); 
}

int main(){
    vector<int> nums = {1, 2, 3}; 
    vector<int> subset; 
    search(subset, 0, nums); 
    for(auto &sub : S){
        for(auto &i : sub){
            cout << i << " "; 
        }
        cout << endl; 
    }
    
    return 0;
}