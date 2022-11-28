#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; 
    cin >> n; 
    int count = 0;
    for(int i = 0; i < n; i++){
        int mark[2] = {0};
        for(int i = 0; i < 3; i++){
            int temp; 
            cin >> temp;
            if(temp == 1) mark[1]++;
            else mark[0]++;
        }
        if(mark[1]>1) count++;
    }
    cout << count << endl;
    return 0;
}