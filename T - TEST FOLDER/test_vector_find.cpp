#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector<int> v {4, 5, 1, 2, 3};
    	vector<int>::iterator itr = find(v.begin(), v.end(), 3);
	int index = distance(v.begin(), itr);
    cout << index + 1;
    return 0;
}