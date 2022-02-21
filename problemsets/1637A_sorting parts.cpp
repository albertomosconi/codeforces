// https://codeforces.com/problemset/problem/1637/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define F first
#define S second
#define MP make_pair
#define PB push_back

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // begin code
    int tc, n, i, prev, c, yes;
    cin >> tc;
    for (; tc > 0; tc--)
    {
        prev = -1;
        yes = 0;
        cin >> n; // read length of array
        for (i = 0; i < n; i++)
        {
            cin >> c;
            if (!yes && c < prev)
            {
                cout << "YES\n";
                yes = 1;
            }
            prev = c;
        }
        if (!yes)
            cout << "NO\n";
    }

    // end code
    return 0;
}
