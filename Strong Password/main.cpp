#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N; 
    cin >> N; 
    string str; 
    cin >> str; 
    regex a("[a-z]+");
    if(regex_search(str, a)) cout << "Y";
    else cout << "N";
    return 0;
}