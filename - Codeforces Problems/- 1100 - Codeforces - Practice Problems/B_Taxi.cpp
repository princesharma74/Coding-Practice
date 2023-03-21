#include <bits/stdc++.h>
using namespace std;

int n1, n2, n3, n4, ans;

int main()
{
    int n;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == 1)
            n1++;
        else if (tmp == 2)
            n2++;
        else if (tmp == 3)
            n3++;
        else
            n4++;
    }

    tmp = min(n1, n3);
    n1 -= tmp;
    n3 -= tmp;
    ans += tmp;

    tmp = min((n1 / 2), n2);
    n1 -= (tmp * 2);
    n2 -= tmp;
    ans += tmp;

    ans += (n2 / 2);
    n2 %= 2;
    ans += (n1 / 4);
    n1 %= 4;

    tmp = min(n1, n2);
    n1 -= tmp;
    n2 -= tmp;
    ans += tmp;

    ans += (min(1, n1) + min(1, n2) + n3 + n4);
    cout << ans << endl;
    return 0;
}