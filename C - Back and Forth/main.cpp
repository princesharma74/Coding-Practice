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

void print(auto &v){
    for(auto it : v ){
        cout << it.first.first << " " << it.first.second << " - " << it.second << endl; 
    }
}

bool available(auto &v, pair<int, int> p){
    return (v.find(p) == v.end()); 
}

pair<int, int> move_dir(int &x, int &y, int dir){
    if(dir == 0) {
        y+=1; 
        return {x, y}; 
    }
    else if(dir == 1){
        y-=1;
        return {x, y};
    }
    else if(dir == 2){
        x+=1; 
        return {x, y};
    }
    else{
        x-=1; 
        return {x, y}; 
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    unordered_map<int, char> mp = {{0, 'U'}, {1, 'D'}, {2, 'R'}, {3, 'L'}}; 
    map<pair<int, int>, float> restricted; 
    
    vector<pair<char, float>> v(4, {'B', 0.0}); 
    int sx, sy, tx, ty; 
    cin >> sx >> sy >> tx >> ty; 
    int x = sx, y = sy; 
    restricted.insert({{x, y}, 0.0});
    int x1 = tx, y1 = ty; 
    int count = 0; 
    bool toggle = true;

    while(count != 4){
        vector<int> dir_av;
        // U D R L
        if(available(restricted, {x, y+1})){
            v[0].first = 'U';
            v[0].second = DIST(x, y + 1, x1, y1);
            dir_av.push_back(0); 
        }


        if(available(restricted, {x, y-1})){
            v[1].first = 'D';
            v[1].second = DIST(x, y - 1, x1, y1);
            dir_av.push_back(1); 
        }
        
        if(available(restricted, {x+1, y})){
            v[2].first = 'R';
            v[2].second = DIST(x + 1, y, x1, y1);
            dir_av.push_back(2); 
        }
        
        if(available(restricted, {x-1, y})){
            v[3].first = 'L';
            v[3].second = DIST(x - 1, y, x1, y1);
            dir_av.push_back(3); 
        }
/*
        cout << "directions " << endl; 
        for(int i : dir_av){
            cout << v[i].first << " " << v[i].second << endl; 
        }
*/
        // find the direction closest to the destination.
        int min_i = dir_av[0]; 
        float min_dist = v[min_i].second; 
        for(int &i : dir_av){
            if(v[i].second < min_dist){
                min_i = i; 
                min_dist = v[i].second;
            }
        }
        // things to do after traversing
        auto temp = move_dir(x, y, min_i);  
        restricted[temp];

        cout << mp[min_i]; 
        if(DIST(temp.first, temp.second, x1, y1) == 0){
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
            count++; 
        }
    }
    return 0;
}