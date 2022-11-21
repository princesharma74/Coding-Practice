#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long

bool check_diff(vector<int> &v1, vector<int> &v2){
    bool check = true; 
    for(int i = 0; i < v1.size() - 1; i++){
        if(!(abs(v1[i]-v1[i+1]) == abs(v2[i] - v2[i+1]))){
            check = false; 
            break; 
        }
    }
    return check;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str; 
        cin >> str; 
        int len = str.length();
        vector<int> v1(len), v2(len);
        for(int i = 0; i < len; i++){
            v1[i] = str[i];
            v2[i] = str[len-i-1];
        }

        if(check_diff(v1, v2)){
            cout << "Funny" << endl;
        }
        else{
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}