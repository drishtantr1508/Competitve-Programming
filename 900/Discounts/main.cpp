#include<iostream>
#include<algorithm>
#include <vector>
#include <numeric>
#define int long long
using namespace std;
void solve(vector <int> vec, vector <int> coupon){
    int sum = accumulate(vec.begin(),vec.end(),0ll);
    for (int i:coupon){
        cout<<(sum - vec[i-1])<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n=0;
    cin>>n;
    vector<int>vec (n,0);
    for (int i=0;i<n;i++){
        cin>>vec[i];
    }
    int m=0;
    cin>>m;
    vector<int> coupon (m,0);
    for (int i=0;i<m;i++){
        cin>>coupon[i];
    }
    sort(vec.begin(),vec.end(),greater<int>());
    solve(vec,coupon);
}