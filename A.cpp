#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int eliminated = n - k;
    int ans = eliminated * 10000;

    cout << ans << '\n';

    return 0;
}