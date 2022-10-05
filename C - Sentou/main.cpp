#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    ll T; 
    cin >> N >> T; 
    ll arr[N]; 
    for(int i = 0; i < N; i++){
        cin >> arr[i]; 
    }
    int sum = 0; 
    int start = arr[0]; 
    int stop = arr[0] + T; 
    for(int i = 1; i < N; i++){
        if(arr[i] > start && arr[i] < stop){
            stop = arr[i] + T; 
        }
        else{
            sum+=(stop - start); 
            start = arr[i]; 
            stop = arr[i] + T;
        }
    }
    sum+=(stop - start); 
    cout << sum << endl; 
    return 0;
}