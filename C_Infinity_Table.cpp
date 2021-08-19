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
    int n;
    cin>>n;
    double sqr = sqrt(n);
    int floor_val = sqr;
    int x;
    if (floor_val < sqr){
        int b = (floor_val+1)*(floor_val+1), a = (floor_val*floor_val);
        int diff = (b-a)/2;

        if(n == a+diff+1){
            cout<<floor_val+1<<" "<<floor_val+1<<endl;
        }else if(n <= a + diff){
            cout<<n-a<<" "<<floor_val+1<<endl;
        }else if (n>a+diff+1){
            cout<<floor_val+1<<" "<<b-n+1<<endl;
        }
    }else{
        cout<<floor_val<<" "<<1<<endl;
    }


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
