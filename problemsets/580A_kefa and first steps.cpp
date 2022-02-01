// https://codeforces.com/problemset/problem/A/580
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
    int n, i, a, b, best=1, curr=1;
    cin >> n;
    cin >> b;
    for (i=1;i<n;i++){
        cin >> a;
        if (a>=b) {
            curr++;
            best=max(best, curr);
        } else {
            curr=1;
        }
        b = a;
    }
    cout << best << "\n";
    // end code
    return 0;
}

