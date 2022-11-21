#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    cin >> N; 
    vector<pair<int,bool>> v(N);
    for(int i = 0; i < N; i++){
        int temp; 
        cin >> temp; 
        v[i] = {temp,false};
    } 
    int count = -1; 
    int i = 0;
    while(!v[1].second){
        if(v[i].second){
            count = -1; 
            break; 
        }
        else v[i].second = true; 
        i = v[i].first - 1;
        count++; 
    }
    cout << count << endl; 
    return 0;
}