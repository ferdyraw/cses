#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 200005;
int n, m;
multiset<int> s;

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int a; cin >> a;
        s.insert(a);
    }

    while (m--)
    {
        int x; cin >> x;
        auto it = s.lower_bound(x+1);
        if (it == s.begin()) cout << -1 << endl;
        else 
        {
            it--;
            cout << *it << endl;
            s.erase(it);
        }
    }
    
    return 0;
}