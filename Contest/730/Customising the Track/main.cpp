#include <iostream>
#include <vector>
#include <numeric>
#define int long long
using namespace std;

void solve(vector <int> vec, int n){
    //code for solve here
    int diff = accumulate(vec.begin(),vec.end(),0LL)%n;
    int inc = (n-diff)*diff;
    cout<<inc<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,tmp;
    vector <int> vec;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        for (int j=0;j<n;j++){
            cin>>tmp;
            vec.push_back(tmp);
        }
        solve(vec,n);
        vec.clear();
    }
}