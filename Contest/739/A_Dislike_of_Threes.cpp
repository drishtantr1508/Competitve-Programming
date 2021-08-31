#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define rep(i, n) for(int i = 0; i < n; i++)
#define auto_rep(i, n) for(auto i:n)
#define pi (3.141592653589)
using namespace std;


void solve(vector <int> vec){
    //code for solve here
    int n;
    cin>>n;
    cout<<vec[n-1]<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    vector<int>vec;
    for (int i=1;i<=1666;i++){
        if (i%10 != 3 && i%3 != 0){
            vec.push_back(i);
        }
    }
    // cout<<vec.size()<<endl;
    // cout<<vec[999]<<endl;
    while(t--){
        solve(vec);
    }
}
