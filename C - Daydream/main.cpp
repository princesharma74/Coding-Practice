#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    string str; 
    cin >> str; 
    string obj[] = {"dream", "dreamer", "erase", "eraser"}; 
    int len = str.length(); 
    bool check = true; 
    bool ans = true; 
    int j; 
    string str1;
    for(int i = len - 1; i >= 0; i--){
        if(check){
            if(obj[0][obj[0].length() - 1] == str[i]){
                str1 = obj[0]; 
                j = obj[0].length() - 1;
                check = false;
                continue; 
            }
            if(obj[2][obj[2].length() - 1] == str[i]){
                str1 = obj[2]; 
                j = obj[2].length() - 1;
                check = false;
                continue; 
            }
            if('r' == str[i]){
                if('m' == str[i-2]){
                    str1 = obj[1]; 
                    j = obj[1].length() - 1;
                    check = false;
                    continue; 
                }
                if('s' == str[i-2]){
                    str1 = obj[3]; 
                    j = obj[3].length() - 1;
                    check = false;
                    continue; 
                }
            }
            ans = false; 
            break; 
        }
        else{
            if(j==0){
                ++i; 
                check = true; 
                continue;
            }

            if(str[i] != str1[--j]){
                ans = false; 
                break; 
            }
        }
    }

    ans ? cout << "YES" : cout << "NO"; 
    return 0;
}