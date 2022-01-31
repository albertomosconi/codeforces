// https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nstatements, X = 0;
    string cmd;
    cin >> nstatements;
    for (int i = 0; i < nstatements; i++)
    {
        cin >> cmd;
        if (cmd.find("++") != string::npos)
            X++;
        if (cmd.find("--") != string::npos)
            X--;
    }
    cout << X << "\n";
}