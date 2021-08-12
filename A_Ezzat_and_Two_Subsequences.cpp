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

void solve(){
    //code for solve here
    float max_val = -1000000000.0,temp;
    float n,sum = 0.0;
    cin>>n;
    rep(i, n){
        cin>>temp;
        max_val = (max_val < temp)?temp:max_val;
        sum += temp;
    }
    sum = sum-max_val;
    float avg = sum/(n-1.0);
    cout<<max_val+avg<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}