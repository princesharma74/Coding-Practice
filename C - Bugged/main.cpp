#include <bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	bitset<64> b;
	int max = INT_MIN;
	for (int i = 0; i < 1<<N; i++) {
		b = i;
		int sum = 0;
		for (int j = N-1; j >= 0; j--) {
			sum+=b[j]*arr[j];
		}
		if(sum%10==0)sum = 0;
		if(max < sum) max = sum;
	}
	cout << max << endl;
	return 0;
}