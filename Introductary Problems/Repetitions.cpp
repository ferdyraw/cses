#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    cin.tie(0) -> sync_with_stdio(0);

    string s;
    cin >> s;

    int sum = 0, ans = -1e18;
    char c = s[0];

    for (int i = 0; i < s.length(); i++)
    {
        if (c == s[i]) sum++;
        else
        {
            ans = max(ans, sum);
            sum = 1;
            c = s[i];
        }
    }

    cout << max(ans, sum) << endl;
    
    return 0;
}