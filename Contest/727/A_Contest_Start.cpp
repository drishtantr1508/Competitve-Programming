#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define rep(i, n) for (int i = 0; i < n; i++)
#define auto_rep(i, n) for (auto i : n)
#define pi (3.141592653589)
using namespace std;

void print(vector<int> vec)
{
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
}

void solve()
{
    int n, x, t;
    cin >> n >> x >> t;
    // int started = (t / x < n - 1) ? t / x : n - 1;
    // int max_i = (((n - 1) * x - t) % x != 0) ? ((((n - 1) * x - t) / x) + 1) : (((n - 1) * x - t) / x);
    // int sum1 = (max_i + 1) * started;
    // int no = n - 1 - max_i;
    // int sum2 = (no * (n - 1)) - ((no * (2 * max_i + no + 1)) / 2);
    // cout << sum1 + sum2 << endl;
    cout << max(0LL, n - (t / x)) * (t / x) + (min((n - 1), t / (x - 1)) * min(n, t / x) / 2) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
