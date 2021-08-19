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

void print(vector <int> vec){
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

void solve(){
    //code for solve here
    int n,x,t;
    cin>>n>>x>>t;

    vector<int> arrive(n);
    vector<int> leave(n);

    rep(i,n){
        arrive[i] = i*x;
        leave[i] = arrive[i] + t;
    }

    print(arrive);
    print(leave);


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
