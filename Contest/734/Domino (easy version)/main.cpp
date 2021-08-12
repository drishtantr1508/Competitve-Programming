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


void solve(int n, int m, int k){
    //code for solve here
    if (n%2==0){
        if (m%2==0){
            if (k%2==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if (k%2==0 && k <= n*(m/2)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }else if (n%2!=0 ){
        int x = m/2;
        k = k-x;
        n = n-1;
        if (k%2==0 && k <= n*(m/2)){
                cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        } 
    }
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,m,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m>>k;
        solve(n,m,k);
    }
}