#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
Problem Link: https://www.codechef.com/problems/MAXLCS
Approach: 
For Alice: str.substr(0, i);
For Bob: str.substr(i, n-i);

Find out the longest common subsequence of the two substrings using dp.
Facing TLE, need to fix it.
*/
string lsubs(string str1, string str2) {
  int m = str1.length();
  int n = str2.length();
  vector<vector<int>> dp(m + 1, vector<int>(n + 1));

  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 0;
      } else if (str1[i - 1] == str2[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      } else {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  string lcs = "";
  int i = m, j = n;
  while (i > 0 && j > 0) {
    if (str1[i - 1] == str2[j - 1]) {
      lcs = str1[i - 1] + lcs;
      i--;
      j--;
    } else if (dp[i - 1][j] > dp[i][j - 1]) {
      i--;
    } else {
      j--;
    }
  }

  return lcs;
}


int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n; 
        string str; 
        cin >> str; 
        int len = 0;
        int ln;
        for(int i = 1; i < n; i++){
            // cout << str.substr(0, i) <<" " << str.substr(i, n-i) << endl; 
            // cout << lsubs(str.substr(0, i), str.substr(i, n-i)) << endl;
            string str1 = str.substr(0,i);
            string str2 = str.substr(i, n-i);
            reverse(str2.begin(), str2.end());
            int ln = lsubs(str1, str2).length(); 
            if(len < ln ){
                len = ln; 
            }
        }
        cout << len << endl; 
    }
    return 0;
}