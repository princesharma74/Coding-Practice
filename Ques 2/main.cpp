#include<bits/stdc++.h>

using namespace std;

#define ll long long

char arc[1000][1000]; 


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

    // code from here
    int size;

    cin >> size; 
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin>>arc[i][j]; 
        }
        cin.ignore();
    }

    int status = true; 

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i==j){
                if(arc[i][j]!='-'){
                    status = false; 
                    break; 
                }
            }
            if(arc[i][j]==arc[j][i]){
                if(arc[i][j]!='-' && arc[i][j]!='D'){
                    status = false; 
                    break; 
                }
            }
            else{
                if(arc[i][j]=='W'){
                    if(arc[j][i]!='L'){
                        status = false; 
                        break; 
                    }
                }
                if(arc[i][j]=='L'){
                    if(arc[j][i]!='W'){
                        status = false;     
                        break; 
                    }
                }
            }
        }
    }

    if(status){
        cout << "correct" << endl; 
    }
    else{
        cout << "incorrect" << endl; 
    }
    
}