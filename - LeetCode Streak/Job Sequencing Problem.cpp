#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

static bool compare(const Job j1, const Job j2){
    return j1.profit > j2.profit;
}
//Function to find the maximum profit and the number of jobs done.
vector<int> JobScheduling(Job arr[], int n) 
{ 
    // your code here
    vector<int> sdl(n+1);
    int max_profit = 0, ct = 0;
    sort(arr, arr + n, compare);
    
    for(int i = 0; i < n; i++){
        for(int j = arr[i].dead; j > 0; j--){
            if(sdl[j] == 0){
                max_profit += arr[i].profit;
                sdl[j] = arr[i].profit;
                ct++;
                break;
            }
        }
    }
    
    return {ct, max_profit};
} 

void solve(){
    int N = 4;
    Job Jobs[] = {{1,4,20},{2,1,10},{3,1,40},{4,1,30}};
    sort(Jobs, Jobs+N, compare);
    for(int i = 0; i < N; i++){
        cout << Jobs[i].dead << "  " << Jobs[i].profit << endl; 
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}