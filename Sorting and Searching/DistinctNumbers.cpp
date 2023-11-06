#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 200005;
int n, a[N], last, ans;

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);

    last = a[0]; ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (last != a[i])
        {
            last = a[i];
            ans++;
        }
    }

    cout << ans << endl;
    
    return 0;
}