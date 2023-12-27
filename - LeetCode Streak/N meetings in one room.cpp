#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    vector<vector<int>> v, ans;
    for(int i = 0; i < n; i++){
        v.push_back({start[i], end[i], i+1});
    }
    sort(v.begin(), v.end(), [](vector<int> v1, vector<int> v2){
        if(v1[1] == v2[1]) return v1[2] < v2[2];
        return v1[1] < v2[1];
    }); 
    for(int i = 0; i < v.size(); i++){
        cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << endl; 
    }
    
    ans.push_back(v[0]); 
    int endTime = ans[0][1];
    for(int i = 1; i < n; i++){
        if(v[i][0] >= endTime){
            ans.push_back(v[i]); 
            endTime = v[i][1];
        }
    }
    return ans.size();
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        int N = 6;
        int start[] = {1,3,0,5,8,5};
        int end[] =  {2,4,6,7,9,9};
        cout << maxMeetings(start, end, N);
    }
    return 0;
}