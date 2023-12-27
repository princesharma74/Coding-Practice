#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

class Compare {
public:
    bool operator()(pair<int, int> p1, pair<int, int> p2) {
        return p1.second >= p2.second;
    }
};


string reorganizeString(string s){
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();

        // process pair p
        cout << "First: " << p.first << ", Second: " << p.second << endl;
    }

}

void solve(){
    string s; 
    cin >> s; 
    cout << reorganizeString(s) << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}