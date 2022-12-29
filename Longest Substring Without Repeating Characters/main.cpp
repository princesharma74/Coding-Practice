#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin >> s; 
    int i = 0, j = 0, max = 0;
    int alp[26] = {0};
    while(i <= j && s[j] != '\0'){
        alp[s[j] - 'a']++; 
        while(alp[s[j] - 'a'] > 1 && i <= j){
            alp[s[i] - 'a']--;
            i++;
        }
        if(max < (j - i + 1)){
            max = (j - i + 1);
        }
        j++; 
    }
    cout << max << endl; 
    return 0;
}