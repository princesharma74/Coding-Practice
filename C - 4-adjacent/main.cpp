#include <bits/stdc++.h>
using namespace std; 
int main(){
    int N; 
    cin >> N;
    int three[3] = {0}; // three[0] = number of 1's, three[1] = number of 2's, three[2] = number of 4's 
    for(int i = 0; i < N; i++){
        int temp; 
        cin >> temp;
        if(temp & 1 == 1) three[0]++; 
        else if(!( ( temp >> 1 ) & 1 )) three[2]++;
        else three[1]++;
    }
    if(three[0] * three[0] * three[0] == 1) {
        cout << "Yes";
        return 0;
    }
    if(( three[2] >= three[0] - 1 ) && (three[1]!=1)) cout << "Yes";
    else cout << "No";
    return 0;
}