#include <bits/stdc++.h>
using namespace std; 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin); 
    freopen("../output.txt", "w", stdout); 
    #endif
    string num; 
    cin >> num; 
    int len = num.length(); 
    long long ans = 0, sum = 0, total = 0; 
    for(int i = 0; i < (1<<len - 1); i++){
        bitset<9> bit(i);
        sum = 0; total = 0; 
        for(int j = 0; j < len; j++){
            sum+=(num[j] - '0');
            if(bit[j] || j == len - 1){
                total +=sum; 
                sum =0; 
            }
            else{
                sum*=10; 
            }
        }
        ans+=total; 
    }

    cout << ans << endl; 
    /*
    bitset<3> bit(string("00"));
    int sum = 0, total = 0; 
    for(int i = 0; i < len; i++){
        sum+=(num[i]-'0'); 
        if(bit[i] || i == len - 1){
            total +=sum; 
            sum = 0; 
        }
        else{
            sum*=10; 
        }
    }

    cout << total << endl; 

    int len = num.length();
    int sum = 0, total = 0; 
    for(int i = 0; i < len; i++){
        sum = 0; 
        bitset<8> bit(i);
        for(int j = len - 1; j >= 0; j--){
            if(bit.test(i)){
                total+=sum; 
            }
            else{
                sum+=(num[j] - '0');
                sum*=10; 
            }
        } 
    }
    */
    return 0; 
}