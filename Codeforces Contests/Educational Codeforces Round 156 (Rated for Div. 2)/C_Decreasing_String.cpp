#include<bits/stdc++.h>
using namespace std;

char solve(string s, long long pos) {
    int n = s.size();
    vector<int> cnt(26);
    for(char c : s) cnt[c - 'a']++;
    for(int i = 25; i >= 0; i--) {
        long long total = 1LL * cnt[i] * (cnt[i] + 1) / 2;
        if(total < pos) pos -= total;
        else return 'a' + i;
    }
    return 'a';
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s;
        long long pos;
        cin >> s >> pos;
        cout << solve(s, pos) << "\n";
    }
    return 0;
}
