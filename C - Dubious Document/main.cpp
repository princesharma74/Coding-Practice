#include<bits/stdc++.h>
using namespace std;
#define ll long long

int CountChar(char &c, string &str){
    int count = 0; 
    for(char i : str){
        if(i==c) count++;
    }
    return count; 
}
int main(){
    int N; 
    cin >> N; 
    vector<string> vec(N); 
    for(int i = 0; i < N; i++){
        cin >> vec[i]; 
    }
    int Al[26] = {0}; 
    for(char ch = 'a'; ch <= 'z'; ch++){
        int min = CountChar(ch, vec[0]); 
        for(int i = 0; i < N; i++){
            int count = CountChar(ch, vec[i]); 
            if(min > count) min = count; 
        }
        Al[ch - 97] = min; 
    }
    for(int i = 0; i < 26; i++){
        for (int j = 0; j < Al[i]; j++)
            cout << (char)(i + 97);
    }
    return 0; 
}