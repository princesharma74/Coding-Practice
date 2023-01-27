#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int print2largest(int arr[], int n) {
    int max1, max2;
    max1 = max2 = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max1 < arr[i]){
            max2 = max1; 
            max1 = arr[i];
        }
        else if(max2 < arr[i] && arr[i] != max1){
            max2 = arr[i];
        }
    }
    return max2;
}

int main(){
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << print2largest(arr, n) << endl;
    return 0;
}