#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 1000005;
const int MOD = 1e9 + 7;
int val[N];

int add(int a, int b)
{
    return ((a % MOD) + (b % MOD)) % MOD;
}

int dp(int i)
{
    if (i == 0) return 1;
    if (~val[i]) return val[i];

    int best = 0;
    for (int j = 1; j <= min((int)6, i); j++)
    {
        best = add(best, dp(i-j));
    }

    return val[i] = best;
}

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    int n;
    cin >> n;

    memset(val, -1, sizeof(val));
    cout << dp(n) << endl;
    
    return 0;
}