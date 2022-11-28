#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N;
    cin >> N; 
    int arr[N];
    for(int i = 0; i < N; i++) cin >> arr[i];
    int x; 
    cin >> x; 
    int L = 0, mid, R = N - 1;
    while(R - L > 1){
        mid = (L + R)/2;
        if(arr[mid] > x) R = mid - 1;
        else L = mid;
    }
    if(arr[L] == x) cout << "Found at: " << L << endl; 
    else if(arr[R] == x) cout << "Found at: " << R << endl; 
    else cout << "Not Found" << endl;
    return 0;
}