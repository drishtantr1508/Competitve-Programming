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


void solve(vector <int> vec, int n, int k){
    //code for solve here
    //define a vector of char with all latin alphabets in order
    vector <int> int_vec(2*100000,0);
    for(auto i:vec){
        if (int_vec[i]<k){
            int_vec[i]++;
            cout<<int_vec[i]<<" ";
        }else{
            cout<<0<<" ";
        }
    
    }
    cout<<endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k,temp;
        cin>>n>>k;
        vector <int> vec;
        for(int j=0;j<n;j++){
            cin>>temp;
            vec.push_back(temp);
        }
        solve(vec,n,k);
    }
}