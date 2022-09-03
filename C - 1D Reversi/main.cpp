#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here
    string str; 
    cin >> str; 
    int size = str.length(); 
    int i = 0, count = 0; 
    while (i < size - 1)
    {
        if(str[i] != str[i+1]){
            count++; 
        }
        i++; 
    }

    cout << count << endl;
    
    return 0;
}