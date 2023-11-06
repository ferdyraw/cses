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

    int ans = 0, last = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < last) ans += last-a[i];
        else last = a[i];
    }

    cout << ans << endl;
    
    return 0;
}