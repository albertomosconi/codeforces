// https://codeforces.com/problemset/problem/160/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // begin code
    // sort the coins by value with count sort
    // pick the most valuable ones first
    int ncoins;
    cin >> ncoins;
    int count[101], sorted[ncoins], arr[ncoins], i, c, totalsum = 0;
    memset(count, 0, sizeof(count)); // init count array
    for (i = 0; i < ncoins; ++i)
    {
        cin >> c;
        arr[i] = c;
        totalsum += c;
        ++count[c];
    }
    for (i = 1; i <= 100; ++i)
        count[i] += count[i - 1];
    for (i = 0; i < ncoins; ++i)
    {
        sorted[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }
    int countchosen = 0, sumchosen = 0;
    for (i = ncoins - 1; i >= 0; --i)
    {
        ++countchosen;
        sumchosen += sorted[i];
        if (sumchosen > totalsum - sumchosen)
            break;
    }
    cout << countchosen << "\n";
    // end code
}