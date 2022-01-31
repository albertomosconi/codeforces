// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nproblems;
    cin >> nproblems;
    int solcount = 0, probcount = 0, f;
    for (int i = 0; i < nproblems; i++)
    {
        solcount = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> f;
            solcount += f;
        }
        if (solcount > 1)
            probcount++;
    }
    cout << probcount;
}