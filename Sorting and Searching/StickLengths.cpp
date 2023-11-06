#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 200005;
int n, a[N];

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);

    int mid = a[n/2], ans = 0;
    for (int i = 0; i < n; i++) ans += abs(mid-a[i]);

    cout << ans << endl;
    
    return 0;
}