#include<bits/stdc++.h>
using namespace std;
#define ll long long


// HCF of two numbers you can alternatively use gcd function in math.h to find out hcf
int HCF(int N1, int N2){
    while(N1%N2){
        int rem = N1%N2; 
        N1 = N2; 
        N2 = rem; 
    }
    return N2; 
}

// find prime number ahead
int primeAhead(int n){
    if(n==1 || n==0) n=2;
    while(1){
        int check = 1; 
            for(int j = 2; j <= n/2; j++){
                if(n%j==0){
                    check = 0; 
                    break; 
                }
            }
        if(check) break; else n++;
    }
    return n; 
}

void StoreGraphAdj(int N, int M){
    vector<vector<int>> g(N+1);
    for(int i = 0; i < M; i++){
        int v1, v2; 
        cin >> v1 >> v2; 
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
}

int main(){

    return 0;
}