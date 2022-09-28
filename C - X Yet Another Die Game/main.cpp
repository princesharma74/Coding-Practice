#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll N; 
    cin >> N; 
    ll m = ceil(N/11.0); 
    ll n = ceil((N+6)/11.0); 
    if(2*m > 2*(n-1)) cout << 2*m-1; else cout << 2*n - 1;
   /*
    set<int> s = {1, 2, 3, 4, 5, 6}; 
    ll N; 
    cin >> N; 
    ll sum = 0; 
    int U = 1, B = 7 - U; 
    sum+=U;
    ll count = 0; 
    s.erase(U); 
    s.erase(B); 
    while(sum<N){
        // cout << U << " " << B << endl;  
        ll max = *(--s.end()); 
        sum+=max; 
        s.erase(max); 
        s.erase(7-max); 
        s.insert(U); 
        s.insert(B); 
        U = max; 
        B = 7 - max;    
        count++; 
    }
    cout << count << endl; 
    */
    return 0;
}