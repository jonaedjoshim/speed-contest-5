#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s, g;
        cin >> s >> g;

        string m = "";

        for (int i = 0; i < 5; i++)
        {
            if (s[i] == g[i])
            {
                m += 'G';
            }
            else
            {
                m += 'B';
            }
        }

        cout << m << '\n';
    }

    return 0;
}