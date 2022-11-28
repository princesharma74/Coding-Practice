#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        if(s.length()%2!=0){
            cout << -1 << endl; 
            continue;
        }

        int m = s.length()/2;
        string str1 = s.substr(0,m);
        string str2 = s.substr(m,m);
        int arr1[26] = {0}, arr2[26] = {0};
        for(int i = 0; i < m; i++){
            arr1[str1[i] - 'a']++;
        }
        for(int i = 0; i < m; i++){
        arr2[str2[i] - 'a']++;
        }

        int ints = 0;
        for(int i = 0; i < 26; i++){
            ints += min(arr1[i], arr2[i]);
        }
        cout << (m - ints) << endl;
    }
    return 0;
}