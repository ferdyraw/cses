#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 200005;
int n, sum;

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;
    for (int i = 0; i < n-1; i++) 
    {
        int a; cin >> a;
        sum += a;
    }

    cout << n*(n+1)/2 - sum << endl;

    return 0;
}