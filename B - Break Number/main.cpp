#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    cin >> N; 
    int max = 0;
    int arr[N]; 
    int si = 0; 
    for(int i = 0; i < N; i++){
        int count = 0; 
        int sv = i+1; 
        while(sv%2==0){
            count++; 
            sv/=2; 
        }
        if(max <= count) {
            max = count; 
            si = i+1; 
        }
    }
    cout << si; 
    return 0;
}