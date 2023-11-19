#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 105;
const int MOD = 1e9 + 7;
int n, a[N], x, val[1000005];

int add(int a, int b)
{
    return ((a % MOD) + (b % MOD)) % MOD;
}

int dp(int x)
{
    if (x < 0) return 0;
    if (x == 0) return 1;
    if (~val[x]) return val[x];

    int best = 0;
    for (int i = 0; i < n; i++)
    {
        best = add(best, dp(x-a[i]));
    }

    return val[x] = best;
}

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];

    memset(val, -1, sizeof(val));
    cout << dp(x) << endl;
    
    return 0;
}