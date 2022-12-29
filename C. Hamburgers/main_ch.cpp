#include <bits/stdc++.h>
using namespace std;
#define ll long long
string s;
int nb, ns, nc;
int pb, ps, pc;
ll r;
ll ans;
int main()
{
    cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            cnt += nb;
        if (s[i] == 'S')
            cnt += ns;
        if (s[i] == 'C')
            cnt += nc;
    }
    ll cost = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            cost += pb;
        if (s[i] == 'S')
            cost += ps;
        if (s[i] == 'C')
            cost += pc;
    }
    if (cost > r)
    {
        cout << 0;
        return 0;
    }
    ans = r / cost;
    cout << min(ans, cnt);
    return 0;
}