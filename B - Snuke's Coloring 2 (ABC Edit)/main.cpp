#include <bits/stdc++.h>
using namespace std; 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin); 
    freopen("../output.txt", "w", stdout); 
    #endif
    int ax, bx, ay, by, n, W, H; 
    cin >> W >> H >> n; 
    ax = W; 
    ay = H; 
    bx = 0; 
    by = 0;

    vector<vector<int> > vect; 
    int x, y, z; 
    for(int i = 0; i < n; ++i){
        cin >> x >> y >> z; 
        vector<int> a; 
        a.push_back(x); 
        a.push_back(y); 
        a.push_back(z); 
        vect.push_back(a); 
    }

    for(auto &v : vect){
        if(v[2] == 4){
            if(ay > v[1]){
                ay = v[1]; 
            }
        }

        if(v[2] == 3){
            if(by < v[1]){
                by = v[1]; 
            }
        }

        if(v[2] == 2){
            if(ax > v[0]){
                ax = v[0];
            }
        }

        if(v[2] == 1){
            if(bx  < v[0]){
                bx = v[0]; 
            }
        }
    }

    long long ans = (by - ay)*(bx - ax); 
    ans = ans < 0 ? 0 : ans; 
    cout << ans; 

    return 0; 
}