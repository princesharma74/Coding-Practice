#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int n; 
   cin >> n; 
   int arr[n]; 
   for(int i = 0; i < n; i++){
      cin >> arr[i]; 
   }
   int max1, max2; 
   max1 = INT_MIN; 
   max2 = INT_MIN; 
   for(int i = 0; i < n; i++){
      if(max1 < arr[i]){
         max2 = max1;
         max1 = arr[i]; 
      }
      if(max2 < arr[i] && arr[i] != max1){
         max2 = arr[i]; 
      }
   }
   cout << "Max1: "<< max1 << endl; 
   cout << "Max2: "<< max2 << endl; 
   return 0;
}