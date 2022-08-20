#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

    int r, c;

    vector<vector<int>> A;
    vector<vector<int>> B;

    cin >> r >> c;
    int temp; 
    
    for(int i = 0; i < r; i++){
        vector<int> vect; 
        for(int j = 0; j < c; j++){
            cin >> temp;
            vect.push_back(temp); 
        }
        A.push_back(vect); 
        cin.ignore(); 
    }

    cin >> r >> c; 

    for(int i = 0; i < r; i++){
        vector<int> vect;
        for(int j = 0; j < c; j++){
            cin >> temp;
            vect.push_back(temp); 
        }
        B.push_back(vect); 
        cin.ignore(); 
    }
    
    return 0;
}