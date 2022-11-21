#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    cin >> N; 
    for(int i = 0; i < N; i++){
        int m; 
        cin >> m; 
        int arr[m];
        map<int, int> mi; 
        for(int j = 0; j < m; j++){
            cin >> arr[j];
            mi[arr[j]]++; 
        }
        multiset<int> s1; 
        for(auto m : mi){
            s1.insert(m.second);
        }
        for(int k : s1) cout << k;
        cout <<endl; 
        string str; 
        cin >> str; 
        map<char, int> mc; 
        for(int j = 0; j < str.length(); j++){
            cin >> str[i];
            mc[str[i]]++; 
        }
        multiset<int> s2; 
        for(auto m : mc){
            s2.insert(m.second);
        }
        for(int k : s2) cout << k;
        cout <<endl; 
        s1 == s2 ? cout << "YES\n" : cout << "NO\n"; 
    }
    return 0;
}