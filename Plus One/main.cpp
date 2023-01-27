#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const unsigned int mod = 1000000007;

vector<int> plusOne(vector<int>& digits) {
    int i = digits.size() - 1; 
    while(digits[i] + 1 > 9 && i != 0){
        digits[i] = ( digits[i] + 1 )%10;
        i--;
    }
    if(digits[i] + 1 < 10){
        digits[i] = digits[i] + 1;
    }
    else{
        digits[i] = (digits[i] + 1)%10;
        digits.insert(digits.begin(), 1);
    }
    return digits;
}

int main(){
    vector<int> v;
    int tmp;
    while(cin >> tmp){
        v.push_back(tmp);
    }
    v = plusOne(v);
    for(int &it : v) cout << it << " ";
    return 0;
}