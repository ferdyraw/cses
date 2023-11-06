#include <bits/stdc++.h>
using namespace std;

#define int long long
#define F first
#define S second

const int N = 200005;
int n, x;
pair<int, int> a[N];

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].F;
        a[i].S = i;
    }

    sort(a, a+n);

    int l = 0, r = n-1;
    while (l < r)
    {
        int sum = a[l].F+a[r].F;
        if (sum == x)
        {
            cout << a[l].S+1 << " " << a[r].S+1 << endl;
            return 0;
        }
        if (sum > x) r--;
        else l++;
    }

    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}