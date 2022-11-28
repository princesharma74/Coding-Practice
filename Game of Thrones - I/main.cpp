#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str; 
    cin >> str; 
    int arr[26] = {0}, i = 0;
    while(str[i]!='\0'){
        arr[str[i]-'a']++;
        i++;
    }

    int evenCount = 0, unqChar = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > 0){
            unqChar++;
            if(arr[i]%2==0){
                evenCount++;
            }
        }
    }
    if(evenCount == unqChar || evenCount == (unqChar - 1)) cout << "YES";
    else cout << "NO";
    return 0;
}