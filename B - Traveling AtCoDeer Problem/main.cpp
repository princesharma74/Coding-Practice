#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    cin >> N;
    int max = INT_MIN, min = INT_MAX; 
    for(int i = 0; i < N; i++){
        int temp; 
        cin >> temp; 
        if(max < temp) max = temp; 
        if(min > temp) min = temp; 
    }
    cout << (max - min); 
    return 0;
}