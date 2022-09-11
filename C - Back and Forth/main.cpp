#include<bits/stdc++.h>
using namespace std;
#define ll long long


float DIST(int x1, int y1, int x2, int y2){
    float x_2 = (float) x2; 
    float x_1 = (float) x1; 
    float y_2 = (float) y2; 
    float y_1 = (float) y1; 
    return sqrt(pow((x_2 - x_1), 2) + pow((y_2 - y_1),2)); 
}

unordered_map<int, char> mp = {{0, 'U'}, {1, 'D'}, {2, 'R'}, {3, 'L'}}; 
map<pair<int, int>, float> restricted; 

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    vector<pair<int, float>> v(4, {-1, 0.0}); 
    int sx, sy, tx, ty; 
    cin >> sx >> sy >> tx >> ty; 
    int x = sx, y = sy; 
    restricted.insert({{x, y}, 0.0}); 
    int x1 = tx, y1 = ty; 
    int count = 0; 
    bool toggle = true;
    vector<char> path; 
    while(true){
        vector<int> dir_av; 
        // U D R L
        if(restricted.find({x, y + 1})!=restricted.end()){
            v[0].first = 1;
            v[0].second = DIST(x, y + 1, x1, y1);
            dir_av.push_back(0); 
        }
        
        if(restricted.find({x, y - 1})!=restricted.end()){
            v[0].first = 1;
            v[0].second = DIST(x, y - 1, x1, y1);
            dir_av.push_back(1); 
        }
        
        if(restricted.find({x + 1, y})!=restricted.end()){
            v[0].first = 1;
            v[0].second = DIST(x + 1, y, x1, y1);
            dir_av.push_back(2); 
        }
        
        if(restricted.find({x - 1, y})!=restricted.end()){
            v[0].first = 1;
            v[0].second = DIST(x - 1, y, x1, y1);
            dir_av.push_back(3); 
        }
        
        // find the direction closest to the destination.
        int min_i = dir_av[0]; 
        float min_dist = v[min_i].second; 
        for(int &i : dir_av){
            if(v[i].second < min_dist){
                min_i = i; 
            }
        }
        path.push_back(mp[min_i]); 
        count++; 
        if(count == 4) break;
        if(toggle){
            x = tx; 
            y = ty; 
            x1 = sx; 
            y1 = sy; 
            restricted.erase({sx, sy});
            restricted.insert({{tx, ty}, 0.0}); 
            toggle = false; 
        }
        else{
            x = sx; 
            y = sy; 
            x1 = tx; 
            y1 = ty; 
            restricted.erase({tx, ty});
            restricted.insert({{sx, sy}, 0.0}); 
            toggle = true; 
        }
    }
    return 0;
}