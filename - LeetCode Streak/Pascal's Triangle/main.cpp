#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

vector<int> getRow(int rowIndex) {
    int numRows = rowIndex + 1;
     // if num of Rows is just one. return right away
    if(numRows == 1) return vector<int>{1};

    vector<vector<int>> v; 
    v.push_back(vector<int>{1});

    // if num of rows is just two
    vector<int> prev{1,1}; 
    v.push_back(prev); 

    if(numRows == 2) return v[rowIndex];

    // more rows required for more than 2 rows. we only need to run the loop numRows - 2 times
    for(int i = 0; i < numRows - 2; i++){
        vector<int> curr; 
        // insert the differences of prev vector
        for(int j = 1; j < prev.size(); j++){
            curr.push_back(prev[j-1] + prev[j]);
        }
        // insert 1 at the beginning and at the end
        curr.insert(curr.begin(), 1);
        curr.insert(curr.end(), 1);
        v.push_back(curr);
        prev = curr;
    }
    return v[rowIndex];   
}

vector<vector<int>> generate(int numRows) {
    // if num of Rows is just one. return right away
    if(numRows == 1) return vector<vector<int>>{{1}};
        vector<vector<int>> v; 
        v.push_back(vector<int>{1});

        // if num of rows is just two, return {1,1}
        vector<int> prev{1,1}; 
        v.push_back(prev); 
    if(numRows == 2) return v;

    // more rows required for more than 2 rows. we only need to run the loop numRows - 2 times
    for(int i = 0; i < numRows - 2; i++){
        vector<int> curr; 
        // insert the differences of prev vector
        for(int j = 1; j < prev.size(); j++){
            curr.push_back(prev[j-1] + prev[j]);
        }
        // insert 1 at the beginning and at the end
        curr.insert(curr.begin(), 1);
        curr.insert(curr.end(), 1);
        v.push_back(curr);
        prev = curr;
    }
    return v;
}

int main(){
    //Problem Link: https://leetcode.com/problems/pascals-triangle/
    int n; 
    cin >> n; 
    vector<vector<int>> v = generate(n);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++) cout << v[i][j] << " ";
        cout << endl; 
    }
    return 0;
}