#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n; 
        string str; 
        cin >> str; 
        map<string, int> mp; 
        bool flag = false; 
        string prev = "";
        int ct = 0; 
        for(int i = 0; i < n-1; i++){
            if(prev != str.substr(i,2) || ct >= 1){
                ct = 0;
                if(!mp[str.substr(i,2)]) mp[str.substr(i, 2)]++;
                else{
                    flag = true; 
                    break; 
                }
            }
            else ct++; 
            prev = str.substr(i,2);
        }
        cout << (flag ? "YES" : "NO") << endl; 
    }
    return 0;
}
