#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#include<numeric>
#define int long long
#define float double
#define pi (3.141592653589)
using namespace std;


//any-else function here


void solve(vector <int> vec_i, vector <int> vec_o){
    //code for solve here
    sort(vec_i.begin(),vec_i.end());
    sort(vec_o.begin(),vec_o.end());

    int len = (vec_i.size()/4);
    int i_sum = accumulate(vec_i.begin()+len,vec_i.end(),0LL);
    int o_sum = accumulate(vec_o.begin()+len,vec_o.end(),0LL);
    

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,k;
    vector <int> vec_i;
    vector <int> vec_o;
    for (int i=0;i<t;i++){
        cin>>n;
        for (int j=0;j<n;j++){
            cin>>k;
            vec_i.push_back(k);
        }
        for (int j=0;j<n;j++){
            cin>>k;
            vec_o.push_back(k);
        }
        solve(vec_i,vec_o);
    }
    
}