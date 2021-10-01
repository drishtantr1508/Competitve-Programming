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
    //code for solve here
    int n, sum = 0, temp;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n + 2; i++)
    {
        cin >> temp;
        vec.push_back(temp);
        sum += temp;
    }
    
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
