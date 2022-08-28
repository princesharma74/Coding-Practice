#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

    int a, b; 
    cin >> a >> b; 

    vector<string> arr(a);
    for(int i = 0; i < a; i++){
        cin >> arr[i]; 
    }

    sort(arr.begin(), arr.end()); 

    for(string a : arr){
        cout << a; 
    }

    return 0; 
}