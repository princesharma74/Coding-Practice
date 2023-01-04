/*
Problem Link: https://practice.geeksforgeeks.org/problems/af49b143a4ead583e943ca6176fbd7ea55b121ae/1

Approach: 
We should be targeting to look at the values where either start and end of the interval is happening. 
One should be clear about the fact that if someone's work start at a point of time, that means
number of laptops required will increment by one and at someone's end time, the number of laptop will decrement by 1 as one laptop will get free so we can use.

Considering the same approach we will increment the hash value at start[i] and decrement for end[i]
*/
#include<bits/stdc++.h>
using namespace std;

int minLaptops(int N, int start[], int end[]) {
    map<int, int> mp; 
    for(int i = 0; i < N; i++){
        mp[start[i]]+=1; 
        mp[end[i]]-=1;
    }
    int ans = 0, c = 0;
    for(auto p : mp){
        c+=p.second; 
        ans = max(c, ans);
    }
    return ans; 
}

int main(){
    int n; 
    cin >> n;
    int start[n], end[n];
    for(int i = 0; i < n; i++) cin >> start[i];
    for(int i = 0; i < n; i++) cin >> end[i];
    cout << (minLaptops(n, start, end)) << endl; 
    return 0; 
}
