#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(); 
    int n = matrix[0].size();

    int L = 0, R = (m*n)-1, mid; 
    while(R - L > 0){
        mid = (R + L)/2;
        if(matrix[mid/n][mid%n] < target) L = mid + 1;
        else R = mid;
    }

    if(matrix[L/n][L%n] == target) return true;
    else if(matrix[R/n][R%n] == target) return true; 
    else return false; 
}

//Problem Link: https://leetcode.com/problems/search-a-2d-matrix/
/* Approach: */
void solve(){
    int m = 3, n = 4; 
    vector<vector<int>> matrix{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 23; 
    cout << searchMatrix(matrix, target) << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}