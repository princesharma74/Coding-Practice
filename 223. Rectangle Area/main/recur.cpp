#include<bits/stdc++.h>
using namespace std;
#define ll long long

void recur(vector<pair<int, string>> &L1, vector<pair<int, string>> &L2, vector<pair<int, string>> &L3, int n){
    if(n>3){
        return;
    }
    cout << "Layer " << n << endl;
    recur(L1, L2, L3, n+1);
}

int main(){
    recur(2);
    return 0;
}