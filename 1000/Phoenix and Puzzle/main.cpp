#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define pb push_back
#define pf push_front
#define vt vector
#define float double
#define pi (3.141592653589)
using namespace std;


//any-else function here
bool check_int(double a){
    if (floor(a) == a){
        return true;
    }else{
        return false;
    }
}

void solve(int n){    
        if (check_int(sqrt(n/2.0)) || check_int(sqrt(n)/2.0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"No"<<endl;
        }    
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    int n;
    for (int i=0;i<t;i++){
        cin>>n;
        solve(n);
    }
}
