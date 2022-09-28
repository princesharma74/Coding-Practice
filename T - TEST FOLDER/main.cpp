#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n = 3; 

void print(vector<int> &subset){
    for(int i = 0; i<subset.size(); i++){
        cout << subset[i] << " "; 
    }
    cout << endl; 
}

void search(int k, vector<int> &subset){
    if(k == n + 1){ 
        return; 
    }
    else{
        subset.push_back(k); 
        print(subset); 
        search(k+1, subset); 
        subset.pop_back(); 
        print(subset); 
        search(k+1, subset); 
    }
}

int main(){
    vector<int> subset; 
    search(1, subset); 
    return 0;
}   