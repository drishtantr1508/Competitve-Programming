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

void solve()
{
    //code for solve here
    int n, k, t = 0;
    cin >> n >> k;
    int a;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec.push_back(a);
        if (i > 0 && vec[i] < vec[i - 1])
            t++;
    }

    if (t + 1 > k)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
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