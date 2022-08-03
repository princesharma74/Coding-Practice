// Problem Link: https://atcoder.jp/contests/abc261/tasks/abc261_c

#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

	int size;
	cin >> size; 
	string str[size]; 
	int count = 0; 

	for(int i = 0; i < size; i++){
		cin >> str[i]; 
	} 

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(str[i]==str[j]){
				count++; 
				if(count > 1){
					str[j] = str[j]+"("+to_string(count - 1) + ")";
				}
			}
		}
		count=0; 
	}

	for(int i =0; i < size; i++){
		cout << str[i] << endl; 
	}

	return 0;    
}