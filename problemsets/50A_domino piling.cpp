// https://codeforces.com/problemset/problem/50/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N, tot;
    cin >> M >> N;
    tot = ((M % 2) * (N / 2)) + (M / 2) * N;
    cout << tot << "\n";
}