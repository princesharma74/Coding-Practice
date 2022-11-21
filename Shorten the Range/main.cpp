#include<bits/stdc++.h>
using namespace std; 
int main(){
    int N; 
    cin >> N;
    float arr[N]; 
    for(int i = 0; i < N; i++){
        cin >> arr[i]; 
    }
    cout << arr[0] << endl; 
    int newN; 
    cin >> newN; 
    for(int i = 0; i < newN; i++){
        float dx = N/(newN - 1); 
        int j = dx*i; 
        printf("%.1f ", arr[j]);
    }
    return 0;
}