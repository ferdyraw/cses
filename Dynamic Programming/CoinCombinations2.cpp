#include <bits/stdc++.h>
using namespace std;

const int N = 100;
const int MOD = 1e9 + 7;
int n, x;

int add(int a, int b)
{
    return ((a % MOD) + (b % MOD)) % MOD;
}

int main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            dp[i][j] = dp[i-1][j];
            if (j-a[i-1] >= 0)
            {
                dp[i][j] = add(dp[i][j], dp[i][j-a[i-1]]);
            }
        }
    }

    cout << dp[n][x] << endl;

    return 0;
}