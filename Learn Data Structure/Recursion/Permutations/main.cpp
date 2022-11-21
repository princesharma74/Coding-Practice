#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> vt; 

void writePerm(vector<int> nums, int index){
    // base condition
    if(index >= nums.size()){
        vt.push_back(nums);
        return;
    }
    for(int i = index; i < nums.size(); i++){
        swap(nums[i], nums[index]);
        writePerm(nums, index+1);
        // backtracking 
        swap(nums[i], nums[index]);
    }
}

int main(){
    int N; 
    cin >> N;
    vector<int> nums(N);
    for(int i = 0; i < N; i++) cin >> nums[i];
    writePerm(nums, 0);
    for(auto v : vt){
        for(auto i : v) cout << i << " ";
        cout << endl; 
    }
    // using next_permutation function
    cout << "Using next_permutations.. " << endl;
    do{
        for(int i : nums) cout << i << " ";
        cout << endl;
    }while(next_permutation(nums.begin(), nums.end()));

    return 0;
}