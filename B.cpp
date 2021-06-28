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


void solve(vector <int> vec, int n){
    //code for solve here
    int count = 0;
    int max_sum = (2*n)-1;
    for (int i=1;i<vec.size();i++){
        for (int j=i+1;j<=vec.size();j++){
            if ((vec[i-1]*vec[j-1]) == (i)+(j)){
                count++;
            }
        }
    }
    cout<<count<<endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=0;
    cin>>t;
    int n=0;
    for (int i=0;i<t;i++){
        cin>>n;
        int a = 0;
        vector <int> vec;
        for (int j=0;j<n;j++){
            cin>>a;
            vec.push_back(a);
        }
        solve(vec,n);
    }
}