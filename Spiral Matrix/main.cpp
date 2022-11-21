#include<bits/stdc++.h>
using namespace std;
#define ll long long


void toggle(bool &tog){
        if(tog){

            tog = 0; 
        }
        else{
            tog = 1;
        }
}

int main(){
    int N, M; 
    cin >> N >> M; 
    int arr[N][M]; 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) cin >> arr[i][j]; 
    }
    int i_d = 1;  
    int i = -1, j = 0;
    bool ID = 1;

    int Nlp = N, Mlp = M - 1, ele = 0; 
    bool tog = 1;   

    while(ele!=(N*M)){
        for(int l = 0; l < Nlp; l++){
            i_d ? i++ : i--; 
            cout << arr[i][j] << " "; 
            ele++;
        }
        Nlp-=1;


        for(int l = 0; l < Mlp; l++){
            i_d ? j++ : j--; 
            cout << arr[i][j] << " "; 
            ele++; 
        }
        Mlp-=1; 

        if(i_d > 0){
            i_d--; 
        }
        else{
            toggle(ID); 
            i_d = 1;
       }
    }
    return 0;
}