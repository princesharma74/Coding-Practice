#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, p = 0, n = 0;
    cin >> a;
    string s;
    cin >> s;
    for (auto it : s)
      if (it == '+')
        n++;
      else
        p++;
    cout << abs(n - p) << endl;
  }
}
