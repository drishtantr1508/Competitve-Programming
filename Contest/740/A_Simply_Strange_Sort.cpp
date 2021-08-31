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
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int count = 0;
    while (!is_sorted(vec.begin(), vec.end()))
    {
        for (int i = count % 2; i < n - 1;)
        {
            if (vec[i] > vec[i + 1])
                swap(vec[i], vec[i + 1]);
            i = i + 2;
        }
        count++;
    }

    cout << count << endl;
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
