#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here
    int N; 
    cin >> N; 
    vector<int> v;
    int sum = 0; 
    int temp;  
    for (int i = 0; i < N; i++){
        cin >> temp; 
        sum+=temp; 
        v.push_back(temp); 
    }

    int N1; 
    cin >> N1; 
    for(int i = 0; i < N1; i++){
        int j; 
        cin >> j >> temp; 
        cout << sum - v[--j] + temp << endl;  
    }
    
    return 0;
}