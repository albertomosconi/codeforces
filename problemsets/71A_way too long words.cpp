// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int nwords;
    cin >> nwords;
    string word;
    for (int i = 0; i < nwords; i++)
    {
        cin >> word;
        if (word.length() > 10)
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << "\n";
        else
            cout << word << "\n";
    }
}