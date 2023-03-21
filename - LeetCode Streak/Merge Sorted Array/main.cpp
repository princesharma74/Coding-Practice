#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

void swap(int &a, int &b){
    int tmp = a; 
    a = b; 
    b = tmp; 
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = 0, j = 0, k = 0; 
    vector<int> cpy = nums1; 
    while(i < m && j < n){
        if(nums1[i] > nums2[j]){
            cpy[k] = nums2[j];
            j++;
        }
        else{
            cpy[k] = nums1[i];
            i++;
        }
        k++;
    }
    while(i < m){
        cpy[k] = nums1[i];
        i++;
        k++;
    }

    while(j < n){
        cpy[k] = nums2[j];
        j++;
        k++;
    }
    nums1 = cpy;
}

int main(){
    int mn, n; 
    cin >> mn;
    vector<int> nums1(mn);
    for(int i = 0; i < mn; i++) cin >> nums1[i];
    cin >> n; 
    vector<int> nums2(n);
    for(int i = 0; i < n; i++) cin >> nums2[i];
    merge(nums1, mn - n, nums2, n);
    for(int i = 0; i < mn; i++) cout << nums1[i] << " ";
    return 0;
}