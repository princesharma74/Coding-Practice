#include<bits/stdc++.h>
using namespace std;
#define ll long long

int lower_bound(int x, vector<int> &arr){
    int L = 0, R = arr.size() - 1, mid;
    while(R - L > 0){
        mid = (R + L)/2; 
        if(x > arr[mid]) L = mid + 1;
        else R = mid;
    }
    if(arr[L] >= x) return L; 
    if(arr[R] >= x) return R; 
    return -1;
}

int upper_bound(int x, vector<int> &arr){
    int L = 0, R = arr.size() - 1, mid;
    while(R - L > 0){
        mid = (R + L)/2; 
        if(x >= arr[mid]) L = mid + 1;
        else R = mid;
    }
    if(arr[L] > x) return L; 
    if(arr[R] > x) return R; 
    return -1;
}

int binary_search(int x, vector<int> &arr){
    int L = 0, R = arr.size() - 1, mid; 
    while(R - L > 0){
        mid = (L + R)/2;
        if(arr[mid] < x) L = mid + 1; 
        else R = mid; 
    }
    if(arr[L] == x) return L;
    if(arr[R] == x) return R;
    return -1;
}

int main(){
    int N; 
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];
    int x; 
    cin >> x; 
    cout << binary_search(x, arr) << endl;
    cout << arr[lower_bound(x, arr)] << endl;
    cout << arr[upper_bound(x, arr)] << endl;
    return 0;
}