#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int a, int K){
    if(a >= 0 && a <= K){
        return true; 
    }
    else{
        return false; 
    }
}

void print(int x, int y, int &count, int K){
    int z = 0; 
    while(y >= 0){
        if(check(x, K) && check(y, K) && check(z, K)){
            count++; 
        }
        // cout << x << " " <<  y << " " << z << endl; 
        y--; z+=1; 
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here
    int x, y, z; 
    int K, S; 
    cin >> K >> S; 
    x = S; 
    y = 0;
    z = 0; 
    int count = 0; 
    int Y = 0; 
    while(x >= 0){
        print(x, y, count, K); 
        x--; y+=1; 
    }
    cout << count << endl; 
    return 0;
}