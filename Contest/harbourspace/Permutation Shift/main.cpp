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


void solve(vector <int> vec, int n, int m){
    //code for solve here


}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,m,temp;

    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n>>m;
        vector <int> vec;
        for (int j=0;j<n;j++){
           cin>>temp;
           vec.push_back(temp); 
        }
        solve(vec, n, m);
    }
}