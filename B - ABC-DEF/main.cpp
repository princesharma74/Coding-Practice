#include<bits/stdc++.h> 
using namespace std; 
const long long Ed = 998244353;
#define ll long long
int main(){
  uint64_t A, B, C, D, E, F; 
  cin >> A >> B >> C >> D >> E >> F; 
  A%=Ed;
  B%=Ed;
  C%=Ed;
  D%=Ed;
  E%=Ed;
  F%=Ed;

  cout << (( (((A*B)%Ed)*C)%Ed - (((D*E)%Ed)*F)%Ed ) + Ed)%Ed;
  return 0;
}