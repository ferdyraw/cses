#include <bits/stdc++.h>
using namespace std;

#define int long long
#define F first
#define S second

const int N = 200005;
int n;
pair<int, int> a[N];

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i].F;
        a[i].S = i;
    }

    sort(a, a+n);

    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i].S < a[i-1].S) ans++;
    }

    cout << ans << endl;

    return 0;
}