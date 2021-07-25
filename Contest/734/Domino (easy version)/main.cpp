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
    if(m>=2){
        int vertical = ((n*m)/2)-k;
        int left_cell = (n*m)-2*k;
        if ((left_cell/2)%2 ==0){
            cout<<"YES"<<endl;
        }else if(m%2==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
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