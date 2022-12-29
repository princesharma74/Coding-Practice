/*
PROBLEM LINK: https://www.codechef.com/problems/MINDIST1

Approach: 
On careful understanding of the pattern formed, The answer can either be 1 or 2. 
1. If all one's shows consistency in their position of their indexes. Like
If all ones at even index or if all ones at odd positions then, answer 2. 
2. If consistency somehow breaks, the answer should be one.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        int n; 
        cin >> n; 
        string str; 
        cin >> str; 
        int i = 0; 
        bool oneFound = true, ans = true; 
        int typeOE; 
        while(str[i] != '\0'){
            if(str[i] == '1'){
                if(oneFound){
                    oneFound = false; 
                    typeOE = i%2; 
                }
                if(!oneFound){
                    if(typeOE != i%2){
                        ans = false; 
                        break; 
                    }
                }
            }
            i++; 
        }

        ans ? cout << 2 << endl : cout << 1 << endl; 

    }
    return 0;
}