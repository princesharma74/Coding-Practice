#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll N;
    int Q; 
    cin >> N >> Q; 
    vector<set<ll>> v(N+1);
    for(int i = 0; i < Q; i++){
        int T;
        ll A, B; 
        cin >> T >> A >> B; 
        if(T == 1){
            v[A].insert(B);
        }
        else if(T == 2){
            auto it = v[A].find(B);
            if(it != v[A].end()){
                v[A].erase(it);
            }
        }
        else{
            if(v[A].find(B) != v[A].end() && v[B].find(A) != v[B].end()){
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
    }
    return 0;
}