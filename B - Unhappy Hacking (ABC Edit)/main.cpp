#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printVec(vector<char> &v){
    for(char &c : v){
        cout << c; 
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here

    vector<char> v_str; 

    string str; 
    cin >> str; 
    int i = 0; 
    while(str[i]!='\0'){
        if(str[i]== '0' || str[i] == '1'){
            v_str.push_back(str[i]); 
        }
        if(str[i] == 'B' && v_str.size() !=0){
            v_str.pop_back();
        }
        i++; 
    }

    /*
    Observation: 
    -> don't pop_back when a vector is already empty. 
    */

    printVec(v_str); 
    return 0;
}