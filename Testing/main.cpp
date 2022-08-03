#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif

    int n;
    cin >> n;
    char s[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
        cin.ignore();
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (s[i][j] == 'W')
            {
                if (s[i][j] != 'L')
                    cout << "incorrect";
                break;
            }
            else if (s[i][j] == 'L')
            {
                if (s[i][j] != 'W')
                {
                    cout << "incorrect";
                }
                break;
            }
            else if (s[i][j] == 'D')
            {
                if (s[i][j] != 'D')
                    cout << "incorrect";
                break;
            }
            else
            {
                cout << "correct";
                break;
            }
        }
    }
}