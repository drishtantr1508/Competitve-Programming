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


void solve(vector <int> vec){
    //code for solve here
    int max_val=0;
    for (int i=1;i<vec.size();i++){
        if ((vec[i]*vec[i-1])>max_val){
            max_val = (vec[i]*vec[i-1]);
        }
    }
    cout<<max_val<<endl;

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,a;
    cin>>t;
    for (int i=0;i<t;i++){
        vector <int> vec;
        cin>>n;
        for (int j=0;j<n;j++){
            cin>>a;
            vec.push_back(a);
        }
        solve(vec);
    }

    
}
