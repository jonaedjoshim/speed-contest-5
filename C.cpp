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
        int n;
        cin >> n;

        int na, nb, nc, nd;
        cin >> na >> nb >> nc >> nd;

        int ans = na;
        if (nb > ans)
        {
            ans = nb;
        }
        if (nc > ans)
        {
            ans = nc;
        }
        if (nd > ans)
        {
            ans = nd;
        }

        cout << ans << '\n';
    }

    return 0;
}