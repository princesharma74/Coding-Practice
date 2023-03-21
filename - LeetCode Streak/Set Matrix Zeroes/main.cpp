#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

void setZeroes(vector<vector<int>>& matrix) {
    int i_mp[200] = {0};
    int j_mp[200] = {0};
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            if(!matrix[i][j]){
                i_mp[i]++; j_mp[j]++;
            }
        }
    }

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            if(i_mp[i] || j_mp[j]){
                matrix[i][j] = 0;
            }
        }
    }
}

int main(){
    //Problem Link: https://leetcode.com/problems/set-matrix-zeroes/
    int m, n; 
    cin >> m >> n; 
    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    setZeroes(matrix);

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}