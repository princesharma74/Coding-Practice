#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool checkBeautiful(int a, int b, int c, int d){
    bool flag = false;
    if(a < b && c < d){
        if(a < c && b < d){
            flag = true; 
        }
    }
    return flag; 
}

int main(){
    int t; 
    cin >> t; 
    for(int i = 0; i < t; i++){
        int e[4]; 
        cin >> e[0] >> e[1] >> e[3] >> e[2];
        bool check = false; 
        for(int j = 0; j < 4; j++){
            if(checkBeautiful(e[(j)%4], e[(j + 1)%4], e[(j + 3)%4], e[(j + 2)%4])){
                check = true; 
                break; 
            }
        }
        check ? cout << "YES" << endl : cout << "NO" << endl; 
    }
    return 0;
}