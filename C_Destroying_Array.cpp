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

void solve(int n){
    //code for solve here
    vector<int> vec_o(0,n);
    vector<int> vec_p(0,n);
    vector<int> vec(-1,n);
    vector <int> sum_vec;

    rep(i,n) cin>>vec_o[i];
    rep(i,n) cin>>vec_p[i];
    int max_sum = 0;
    sum_vec.push_back(max_sum);
    
    rep(i,n){
        int a = vec_p[n-i-1];
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    solve(t);
}
