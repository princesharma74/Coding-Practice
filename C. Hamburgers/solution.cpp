#include<bits/stdc++.h>
using namespace std;
long long n[10], i, m, S, q, l, h = (1LL << 41);
string s, b("BSC");
int main()
{
    for (cin >> s; i < s.length(); n[b.find(s[i++])]++)
        ;
    for (i = 3; i < 10; cin >> n[i++])
        ;
    while (l + 1 < h)
    {
        m = l + h >> 1;
        for (S = i = 0; i < 3; i++)
            if ((q = n[i] * m - n[3 + i]) > 0)
                S += q * n[6 + i];
        S > n[9] ? h = m : l = m;
    }
    cout << l;
}