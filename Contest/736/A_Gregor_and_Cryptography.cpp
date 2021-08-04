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
    //code for solve here
    int n;
    cin>>n;
    if (n%2==0){
        cout<<n/2<<" "<<n<<endl;
    }else{
        cout<<(n-1)/2<<" "<<(n-1)<<endl;
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
