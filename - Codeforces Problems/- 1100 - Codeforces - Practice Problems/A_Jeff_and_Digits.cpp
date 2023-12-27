#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int zeros = 0, fives = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a == 0) zeros++;
    else fives++;
  }
  if (zeros == 0) {
    cout << -1 << endl;
  } else if (fives < 9) {
    cout << 0 << endl;
  } else {
    int k = fives / 9 * 9; 
    for (int i = 0; i < k; i++) {
      cout << 5;
    }
    for (int i = 0; i < zeros; i++) {
      cout << 0;
    }
    cout << endl;
  }
  return 0;
}
