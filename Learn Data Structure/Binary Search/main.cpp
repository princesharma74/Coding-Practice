#include<bits/stdc++.h>
using namespace std;
#define ll long long

int lower_bound(int x, vector<int> &arr){
    int L = 0, R = arr.size() - 1, mid;
    while(R - L > 1){
        mid = (L + R)/2; 
        if(x > arr[mid]){
            L = mid + 1; 
        }
        else{
            R = mid; 
        }
    }
    if(arr[L] >= x ) return L;
    else if(arr[R] >= x) return R; 
    else return -1;
}

int binary_search(int x, vector<int> &arr){
    int L = 0, R = arr.size() - 1, mid;
    while(R - L > 1){
        mid = (L + R)/2; 
        if(arr[mid] > x){
            R = mid - 1;
        }
        else L = mid; 
    }
    if(arr[L] == x) return L;
    else if(arr[R] == x) return R;
    else return -1;
}

int main(){
    int N; 
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];
    int x; 
    cin >> x; 
    cout << binary_search(x, arr) << endl;
    cout << lower_bound(x, arr) << endl;
    return 0;
}