#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10000

int main(){
    bool is_prime[MAX + 1];
    int countFactors[MAX + 1] = {0};
    memset(is_prime, true, sizeof(is_prime));

    is_prime[0] = false; 
    is_prime[1] = false; 

    for(int i = 2; i <= MAX; i++){
        if(is_prime[i]){
            countFactors[i]++;
            for(int j = 2*i; j <= MAX; j+=i){
                is_prime[j] = false; 
                countFactors[j]++;
            }
        }
    }

    int t; 
    cin >> t; 
    while(t--){
        int n, m; 
        cin >> n >> m; 
        int total = 0;
        for(int i = n; i < m; i++){
            total+=countFactors[i];
        }
        cout << total << endl; 
    }
    return 0;
}