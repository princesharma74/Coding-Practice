int dpth = 0;

void measureDepth(vector<pair<int, int>> lns, int depth){
    if(dpth < depth) dpth = depth; 
    if(lns.size() == 1){
        return;
    }
    for(int i = 0; i < lns.size(); i++){
        for(int j = i; j < lns.size(); j++){
            if(i!=j){
                int start = max(lns[i].first, lns[j].first);
                int end = min(lns[i].second, lns[j].second);
                if(end - start > 0){ 
                    vector<pair<int, int>> vp = lns;
                    vp.erase(vp.begin() + i);
                    vp.erase(vp.begin() + j);
                    vp.push_back({start, end});
                    measureDepth(vp, depth + 1);
                }
            }
        }
    }
}

int minLaptops(int N, int start[], int end[]) {
    vector<pair<int, int>> vp; 
    for(int i = 0; i < N; i++){
        vp.push_back({start[i], end[i]});
    }
    measureDepth(vp, 1);
    return dpth; 
}