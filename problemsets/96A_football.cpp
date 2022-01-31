// https://codeforces.com/problemset/problem/96/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // begin code
    char c, current_team = '0';
    int dangercount = 0;
    while (scanf("%c", &c) != EOF)
    {
        if (c == '\n')
            break;
        if (c != current_team)
        {
            dangercount = 1;
            current_team = c;
        }
        else
        {
            dangercount++;
            if (dangercount == 7)
                break;
        }
    }
    cout << (dangercount < 7 ? "NO" : "YES")
         << "\n";
    // end code
}