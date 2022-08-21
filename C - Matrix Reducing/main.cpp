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

    int ia = 0;
    int ja = 0; 
    bool bl = true; 

    vector<int> del_row; 
    vector<int> del_col; 

    for(int i = 0; i < A.size(); i++){
        ja = 0; 
        for(int j = 0; j < A[i].size(); j++){
            if(B[ia][ja] == A[i][j]){
                ja++; 
            }
        }
        if(ja == B[ia].size()){
            ia++; 
        }
        else{
            del_row.push_back(i);
        }

        if((A.size() - i) < (B.size() - ia)){
            bl = false; 
            break;
        }

    }

    if(bl){

    for(int i = 0; i < del_row.size(); i++){
        A.erase(A.begin() + del_row[i] - i); 
    }

/*
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[0].size(); j++){
            cout << A[i][j] << " "; 
        }
        cout << endl; 
    }
*/

    ia = 0; ja = 0; 
    for(int j = 0; j < A[0].size(); j++){
        ia = 0; 
        for(int i = 0; i < A.size(); i++){
            if(B[ia][ja] == A[i][j]){
                ia++; 
            }
        }
        if(ia == B.size()){
            ja++; 
        }
        else{
            del_col.push_back(j);
        }

        if((A[0].size() - j) < (B[0].size() - ja)){
            bl = false; 
            break;
        }
    }
    
    if(bl){
        cout << "Yes" << endl; 
    }
    else{
        cout << "No" << endl; 
    }

    
    for(int _i = 0; _i < A.size(); _i++){
        for(int i = 0; i < del_col.size(); i++){
            A[_i].erase(A[_i].begin() + del_col[i] - i);
        } 
    }

    }
    else{
        cout << "No" << endl; 
    }

    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[0].size(); j++){
            cout << A[i][j] << " "; 
        }
        cout << endl; 
    }
/*
    if(bl){ 
            ia = 0; 
            ja = 0; 
            cout << A[0].size() << " - " << A.size(); 
            for(int j = 0; j < A[0].size(); j++){
                for(int i = 0; i < A.size(); i++){
                    cout << A[i][j] << " "; 
                }
                cout << endl; 
            }
    }
    else{
        cout << "No" << endl; 
    }
*/
    return 0;
}