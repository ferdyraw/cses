#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 105;
int n, a[N], x, val[1000005];

int dp(int x)
{
    if (x == 0) return 0;
    if (~val[x]) return val[x];

    int best = 1e18;
    for (int i = 0; i < n; i++)
    {
        if (x-a[i] < 0) continue;
        best = min(best, dp(x-a[i])+1);
    }

    return val[x] = best;
}

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];

    memset(val, -1, sizeof(val));

    int ans = dp(x);
    cout << (ans == 1e18 ? -1 : ans) << endl;

    return 0;
}