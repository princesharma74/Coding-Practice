/*
Problem Link: https://atcoder.jp/contests/abc260/tasks/abc260_b
Sample Input 1:
___________________________________________
6 1 0 2
80 60 80 60 70 70
40 20 50 90 90 80
___________________________________________
Sample Output 1:
___________________________________________
1
4
5

___________________________________________

Sample Input 2:
___________________________________________
5 2 1 2
0 100 0 100 0
0 0 100 100 0
___________________________________________
Sample Output 2:
___________________________________________
1
2
3
4
5
___________________________________________

*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

int Max(int arr[], int N){
    int max_arr = 0;

    for(int i = 0; i < N; i++){
        if(max_arr < arr[i]){
            max_arr = arr[i]; 
        }
    }
    return max_arr; 
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif

    int N, X, Y, Z;
    cin >> N; 
    cin.ignore(); 
    cin >> X; 
    cin.ignore(); 
    cin >> Y; 
    cin.ignore(); 
    cin >> Z; 

    int M[N];
    int E[N]; 

    for(int i = 0; i < N; i++){
        cin >> M[i]; 
        cin.ignore(); 
    }

    for(int i = 0; i < N; i++){
        cin >> E[i];
        cin.ignore(); 
    }

    vector<int> admitted;

    int max = Max(M, N); 

    int count = 0; 

    for(int i = 0; i < N; i++){
        if(max == M[i] && count < X){
            admitted.push_back(i+1); 
            M[i] = -1; 
            E[i] = -1; 
            max = Max(M, N); 
            count++;
        }
    }

    count = 0; 

    max = Max(E, N);

    for(int i = 0; i < N; i++){
        if(max == E[i] && count < Y){
            admitted.push_back(i+1); 
            M[i] = -1; 
            E[i] = -1; 
            max = Max(E, N); 
            count++;
        }
    }

    int T[N]; // T for Total

    for(int i = 0; i < N; i++){
        T[i] = E[i] + M[i]; 
    }

    max = Max(T, N); 
    count = 0; 

    for(int i = 0; i < N; i++){
        
        cout << max <<" _ " << T[i] << " _ " << count << endl; 

        if(count < Z){
            max = Max(T, N); 
        }

        if(max == T[i] && count < Z){
            admitted.push_back(i+1); 
            M[i] = -1; 
            E[i] = -1;
            count++;
        }
    }

    for(int i = 0; i < admitted.size(); i++){
        cout << admitted[i] << endl; 
    }

}