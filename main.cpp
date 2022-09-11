#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    map<pair<int, int>, float> mp = {{{1, 2}, 23.3}, {{2, 3}, 3.4}, {{2, 4}, 3.4}}; 
    cout << (mp.find({1,2}) != mp.end()) << endl;
    cout << (mp.find({2,3}) != mp.end()) << endl;
    return 0;
}