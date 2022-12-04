#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N;
    cin >> N; 
    regex reg("[HDCS][A23456789TJQK]");
    unordered_set<string> st; 
    bool res = true;
    for(int i = 0; i < N; i++){
        string str; 
        cin >> str; 
        if(st.find(str) == st.end() && regex_search(str, reg)){
            st.insert({str});
        }
        else res = false; 
    }
    res ? cout << "Yes" : cout << "No";
    return 0;
}