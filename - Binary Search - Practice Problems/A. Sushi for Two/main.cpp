#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

int main(){
    int n; 
    cin >> n; 
    int prev, ct = 0, kc = true;
    cin >> prev; 
    int max = 0; 
    for(int i = 1; i < n; i++){
        int tmp; 
        cin >> tmp; 
        ct++;
        if(prev!=tmp){
            if(kc) kc = false;
            else{
                if (max < ct)
                    max = ct;
                ct = 0;
                kc = true;
            }
            prev = tmp;
        }
    }
    cout << max << endl; 
}