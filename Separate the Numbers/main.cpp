#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        string str; 
        cin >> str;
        int num = 0; 
        for(int l = 1; l <= str.length()/2; l++){
            int i = 0;
            while(i + l <= str.length()){
                if(i+l == str.length() - 1 && l>1){
                    l+=1;
                }
                cout << str.substr(i,l) << endl;
                i+=l;
            }
            cout << endl;
        }
    }
    return 0;
}