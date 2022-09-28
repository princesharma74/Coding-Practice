#include <iostream>
using namespace std; 

bool check(string *a1, string *a2, int N, int M, int i, int j){
    bool b = true; 
    for(int k = 0 + i; k < M + i; k++){
        for(int l = 0 + j; l < M + j; l++){
            if(a1[k][l] != a2[k-i][l-j]){
                b = false; 
                break; 
            }
        }
        if(!b) break;
    }
    return b; 
}

int main(){
    int N, M; 
    cin >> N >> M; 
    string A[N], B[M]; 
    for(int i = 0; i < N; i++){
        cin >> A[i]; 
    }
    for(int i = 0; i < M; i++){
        cin >> B[i]; 
    }
    bool b = false; 
    for(int i = 0; i <= N-M; i++){
        for(int j = 0; j <= N-M; j++){
            if(check(A, B, N, M, i, j)){
                b = true; 
                break; 
            }
        }
        if(b) break;
    }
    b ? cout << "Yes" : cout << "No"; 
    return 0;  
}