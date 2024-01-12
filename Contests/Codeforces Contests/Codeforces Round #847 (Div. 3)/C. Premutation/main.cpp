#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        vector<vector<int>> in(n, vector<int>(n-1));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++) cin >> in[i][j];
        }
        map<int, int> mp; 
        for(int i = 0; i < n; i++){
            mp[in[i][0]]++;
            if(i == 2) break;
        }
        int unq = mp.begin()->second == 1 ? mp.begin()->first : (--mp.end())->first;
        int rpt = mp.begin()->second != 1 ? mp.begin()->first : (--mp.end())->first;
        int idx;
        for(int i = 0; i < n; i++){
            if(in[i][0] == unq){
                idx = i;
                break;
            }
        }

        vector<int> org_seq = in[idx];
        org_seq.insert(org_seq.begin(), rpt);
        // orginal sequence.. 
        for(int it : org_seq) cout << it << " ";
        cout << endl; 
    }
    return 0;
}