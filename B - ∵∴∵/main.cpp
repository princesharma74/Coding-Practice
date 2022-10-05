#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str1; 
    string str2; 
    cin >> str1; 
    cin >> str2; 
    int N = str1.length() + str2.length(); 
    int i = 0, j = 0, k = 0; 
    while(k < N){
        if(k%2==0){
            cout << str1[i]; 
            i++; 
        }
        else {
            cout << str2[j]; 
            j++; 
        }
        k++; 
    }
    return 0;
}