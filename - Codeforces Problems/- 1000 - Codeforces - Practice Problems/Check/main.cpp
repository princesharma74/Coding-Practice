#include<bits/stdc++.h>
using namespace std; 

int matrix[40][40];

void initialise(){
    int n = 40, st;  
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= (n-i+1)){  matrix[i-1][j-1] = j; st = j;} 
            else{
                int k = (j-(n-i)-1);
                matrix[i-1][j-1] = j + (k*(k+1)/2);
            }
        }
    }
}

int main(){
    int t; 
    cin >> t;
    initialise();
    while(t--){
        int k, n; 
        cin >> k >> n; 
        int j = 0, i = 0; 
        for(i = 39; i>=0; i--){
            for(j = 0; j < 40; j++){
                if(matrix[i][j] > n) break;
            }
            if(j == k) break;
        }

        for(int l = 0; l < j; l++) cout << matrix[i][l] << " ";
        cout << endl; 
    }
    return 0;
}