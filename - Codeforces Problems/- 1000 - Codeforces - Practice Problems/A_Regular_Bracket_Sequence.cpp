#include<bits/stdc++.h> 
using namespace std; 
/*
unordered_map<char, int> symbols = {{'[', -1},{'{', -2},{'(', -3}, {')', 3}, {'}', 2}, {']', 1}}; 
string isBalanced(string s){
	stack<char> st; 
	for(char bracket : s){
        if(st.top() == '?' && bracket == '?') 
		if(symbols[bracket] < 0){
			st.push(bracket); 
		}
		else{
			if(st.empty()) return "NO"; 
			char top = st.top(); 
			st.pop(); 
			if(symbols[top] + symbols[bracket]){
				return "NO"; 
			}
		}
	}
	if(st.empty()) return "YES"; 
	return "NO"; 
}

*/

void solve(){
	string s;
	cin >> s;
	cout << (s.size() % 2 || s[0] == ')' || s.back() == '(' ? "NO\n" : "YES\n");
}

int main(){
    int t; 
    cin >> t;
    while(t--){
		solve();
        // string str; 
        // cin >> str; 
        // cout << isBalanced(str) << endl; 
    }
	return 0; 
}