#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 200005;
int n, a[N];
bool zeropos = false;

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        if (a[i] >= 0) zeropos = true;
    }

    if (!zeropos)
    {
        int ans = -1e18;
        for (int i = 0; i < n; i++) ans = max(ans, a[i]);
        cout << ans << endl;
        return 0;
    }

    int ans = -1e18, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum < 0) sum = 0;
        ans = max(ans, sum);
    }

    cout << ans << endl;
    
    return 0;
}