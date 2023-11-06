#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    int n;
    cin >> n;

    cout << n;
    while (n > 1)
    {
        cout << " ";
        if (n&1) n = n*3 + 1;
        else n /= 2;
        cout << n;
    }
    cout << endl;

    return 0;
}