#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    // Code from here
    string alice, bob, charlie; 
    cin >> alice >> bob >> charlie; 

    int i = alice.length(), j = bob.length(), k = charlie.length(); 
    bool did_it = false; 
    char ch = 'a'; 
    while(!did_it){
        if(ch == 'a'){
            i--; 
            if(i <= 0){
                did_it = true; 
                break; 
            }
            ch = alice[i]; 
        }
        
        else if(ch == 'b'){
            j--; 
            if(j <= 0){
                did_it = true; 
                break; 
            }
            ch = bob[j]; 
        }

        else if(ch == 'c'){
            k--; 
            if(k <= 0){
                did_it = true; 
                break;
            }
            ch = charlie[k];
        }
    }

    if(ch == 'a'){
        cout << 'A' << endl; 
    }
    else if(ch == 'b'){
        cout << 'B' << endl; 
    }
    else if(ch == 'c'){
        cout << 'C' << endl; 
    }

    return 0;
}