// https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nparts, minscorepos, minscore = -1, passed = 0, score;
    cin >> nparts >> minscorepos;
    for (int i = 0; i < nparts; i++)
    {
        cin >> score;
        if (score < 1)
            break;
        if (i >= minscorepos - 1)
        {
            if (i == minscorepos - 1)
                minscore = score;
            if (score == minscore)
                passed++;
            else
                break;
        }
        else
            passed++;
    }
    cout << passed << "\n";
}