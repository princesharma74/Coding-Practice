#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N;
    cin >> N; 
    int arr[N]; 
    for(int i = 0; i < N; i++) cin >> arr[i]; 
    int d, m; 
    cin >> d >> m; 
    int count = 0; 
    for(int i = 0; i < N - m + 1; i++){
        int sum = 0; 
        for(int j = 0; j < m; j++){
            sum+=arr[i+j]; 
        }
        if(sum == d) count++; 
    }
    cout << count << endl; 
    return 0;
}