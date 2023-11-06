#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 200005;
int n, x, a[N];

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);

    int l = 0, r = n-1, ans = 0;
    while (l < r)
    {
        int sum = a[l]+a[r];
        if (sum <= x) l++, r--, ans++;
        else r--, ans++;
    }

    cout << (l == r ? ans+1 : ans) << endl;
    
    return 0;
}