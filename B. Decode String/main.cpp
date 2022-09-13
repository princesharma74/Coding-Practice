#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    int temp; 
    cin >> N; 
    string str; 
    
    vector<string> st_vec; 
    for(int i = 0; i < N; i++){
        cin >> temp; 
        cin >> str; 
        st_vec.push_back(str); 
    }
    
    for(string &s : st_vec){
        vector<int> v_ans; 
        int i = s.length() - 1; 
        while(i >= 0){
            if(s[i]=='0'){
                v_ans.push_back((s[i-2] - '0')*10 + (s[i-1] - '0')); 
                // cout << s[i-2] << s[i-1] << endl; 
                i-=3; 
            }
            else{
                v_ans.push_back(s[i]-'0');
                // cout << s[i] << endl; 
                i--; 
            }
        }

        for(auto it = v_ans.end() - 1; it != --v_ans.begin(); it--){
            cout << (char) (*it + 96); 
        }
        cout << endl; 
    }
    return 0;
}