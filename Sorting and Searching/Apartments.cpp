#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 200005;
int n, m, a[N], b[N], k;

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    sort(a, a+n);
    sort(b, b+m);

    int now = 0, ans = 0;
    for (int i = 0; i < n && now < m; i++)
    {
        while (now < m && a[i] > b[now]+k) now++;
        if (now < m && a[i] >= b[now]-k) now++, ans++;
    }

    cout << ans << endl;
    
    return 0;
}