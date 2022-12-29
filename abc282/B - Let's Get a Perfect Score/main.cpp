#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N, M; 
    cin >> N >> M; 
    vector<string> vst(N);
    for(int i = 0; i < N; i++) cin >> vst[i];
    int count = 0; 
    for(int x = 0; x < N; x++){
        for(int y = 0; y < N; y++){
            if(x!=y){
                bool flag = true; 
                for(int j = 0; j < M; j++){
                    if(!(vst[x][j] == 'o' || vst[y][j] == 'o')){
                        flag = false;
                        break; 
                    }
                }
                if(flag) count++;
            }
        }
    }
    cout << count/2 << endl; 
    return 0;
}