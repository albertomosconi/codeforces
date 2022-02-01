// https://codeforces.com/problemset/problem/1624/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define F first
#define S second
#define MP make_pair
#define PB push_back

void solve();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int pc = a + 2 * (b - a);
    if (pc >= c && pc % c == 0 && pc != 0)
    {
        cout << "yes\n";
        return;
    }
    int pa = 2 * b - c;
    if (pa >= a && pa % a == 0 && pa != 0)
    {
        cout << "yes\n";
        return;
    }
    int pb = a + (c - a) / 2;
    if (pb >= b && (c - a) % 2 == 0 && pb % b == 0 && pb != 0)
    {
        cout << "yes\n";
        return;
    }
    cout << "no\n";
    return;
}