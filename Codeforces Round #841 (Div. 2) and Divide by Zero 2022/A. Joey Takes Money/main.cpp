#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
Problem Link: https://codeforces.com/contest/1731/problem/A
Approach:
Count number of 1s while taking the input.
run a loop until count of 1s is less than n-1
replace max two numbers with 1 and product. This will increase number of 1s
and give the maximum sum.
At the end do the general calculation.
*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ct_1 = 0;
        multiset<ll> st;
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            st.insert(tmp);
            if (tmp == 1)
            {
                ct_1++;
            }
        }
        auto max1 = (--st.end());
        auto max2 = --(--st.end());
        ll max = (*max1) * (*max2);

        while (ct_1 < n - 1)
        {
            max1 = (--st.end());
            max2 = --(--st.end());
            max = (*max1) * (*max2);
            st.erase(max1);
            st.erase(max2);
            st.insert(max);
            ct_1++;
        }
        if (ct_1 != n)
            cout << (ct_1 + max) * 2022 << endl;
        else
            cout << ct_1 * 2022 << endl;
    }
    return 0;
}