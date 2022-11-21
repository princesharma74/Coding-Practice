#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n = 3;
int arr[][3] = {{1, 2, 3},
                {4, 5, 6}, 
                {7, 8, 9}}; 

void search(int y){
    if(y>=n){
        return;
    }
    for(int x = 0; x < n ; x++){
        cout << arr[x][y] << " "; 
    }
    cout << endl; 
    search(y+1);
}

int main(){
    search(0); 
    return 0;
}