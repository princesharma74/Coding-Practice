#include<bits/stdc++.h> 
using namespace std; 
unordered_map<char, int> symbols = {{'[', -1},{'{', -2},{'(', -3}, {')', 3}, {'}', 2}, {']', 1} }; 
string isBalanced(string s){
	stack<char> st; 
	for(char bracket : s){
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

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    string str; 
    cin >> str; 
    cout << isBalanced(str);
	return 0; 
}