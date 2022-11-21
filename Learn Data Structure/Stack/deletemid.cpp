#include<bits/stdc++.h>
using namespace std;
#define ll long long

void deleteMid(stack<int> &st, int mid, int count){
    // base condition
    if(mid == count){
        st.pop();
        return; 
    }
    int keep = st.top();
    st.pop();
    deleteMid(st, mid, count + 1);
    st.push(keep);
}

void printStack(stack<int> &st){
    if(st.empty()) return;
    int keep = st.top(); 
    st.pop(); 
    printStack(st);
    cout << keep << " "; 
}

int main(){
    int test_cases; 
    cin >> test_cases; 

    for(int i = 0; i < test_cases; i++){
        stack<int> st; 
        int N; 
        cin >> N; 
        int it; 
        for(int j = 0; j < N + 1; j++) {
            cin >> it; 
            st.push(it);
        }
        int mid;
        st.size()%2!=0 ? mid = st.size()/2 + 1 : mid = st.size()/2; 
        cout << "MID: " << mid << endl; 
        deleteMid(st, mid, 1);
        printStack(st); 
        cout << endl; 
    }
    return 0;
}