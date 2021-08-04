#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define pi (3.141592653589)
using namespace std;


//any-else function here


void solve(){
    int n;
    cin>>n;
    if (n<6){
        n=6;
    }
    if(n>6 && n%2==1){
        n = n+1;
    }
    int rem = n%6;
    if (rem == 0){
        cout<<15*(n/6)<<endl;
    }else if (rem == 2){
        cout<<15*((n/6)-1) + 20<<endl;
    }else{
        cout<<15*((n/6)-1) + 25<<endl;
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
