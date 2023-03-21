#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int kthSmallest(vector<vector<int>>& matrix, int k) {
    return *((*(matrix.begin() + (k-1)/matrix.size())).begin() + (k-1)%matrix.size()); 
}

//Problem Link: https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
/* Approach: */
void solve(){
    vector<vector<int>> v = {{1,5,9},{10,11,13},{12,13,15}};
    cout << kthSmallest(v, 8);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}