//Problem Link: https://www.hackerearth.com/problem/algorithm/vaccination-time/

#include <iostream>
using namespace std; 


int arr[1000][1000]; 
int cod[1000][1000]; 

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

	// Code from here
	int r = 0; 
	int c = 0;
	int cx = 0; 
	cin >> r>> c; 
	cin.ignore(); 
	for(int i = 0; i < r; i++){
		while(cin.peek()!='\n'){
			cin >> arr[i][cx]; 
			cx++; 
		}
		cx = 0; 
		cin.ignore(); 
	}
	int size = 0; 
	cin >> size; 
	for(int i = 0; i < size; i++){
		cin >> cod[i][0] >> cod[i][1] >> cod[i][2] >> cod[i][3]; 
	}

	int row, col, count; 

	for(int i =0 ; i < size; i++){
		count = 0;
		row = cod[i][0]; 
		col = cod[i][1]; 
		for(int row = (cod[i][0]-1); row < cod[i][2]; row++){
			for(int col = (cod[i][1]-1); col < cod[i][3]; col++){
				if(arr[row][col]%2!=0)
					count++; 
			}
		}
		cout << count << endl; 
	}
}
