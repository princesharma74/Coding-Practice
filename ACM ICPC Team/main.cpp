#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
    int n, m;
    cin >> n >> m; 
    vector<bitset<8>> v(n);
    for(int i = 0; i < n; i++){
        string str; 
        cin >> str; 
        if (!str.empty() && str[str.length()-1] == '\n') {
            str.erase(str.length()-1);
        }
        v[i] = (bitset<8>)(str);
    }
    int max = 0; 
    bitset<8> store; 
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(j!=i){
               int a = (v[i]|v[j]).count();
               if(max < a){
                    max = a;
                    store = v[i]|v[j];
               }
               if(max == m) break; 
            }
        }
    } 
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(j!=i){
                if((v[i]|v[j])==store){
                    count++;
                }
            }
        }
    } 

    cout << max <<" " << count << endl; 
    return 0;
}