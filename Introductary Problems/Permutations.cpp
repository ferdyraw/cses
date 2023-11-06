#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    cout << 2;
    for (int i = 4; i <= n; i += 2) cout << " " << i;
    for (int i = 1; i <= n; i += 2) cout << " " << i;
    cout << endl;
    
    return 0;
}