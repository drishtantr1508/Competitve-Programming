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


void solve(vector <int>vec, int sum){
    //code for solve here
    int k =vec.size();
    if (sum==k){
        cout<<0<<endl;
    }else if(sum<k){
        cout<<1<<endl;
    }else{
        cout<<sum-k<<endl;
    }



}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++){
        int sum = 0,a;
        vector<int> vec;
        cin>>n;
        for (int j=0;j<n;j++){
            cin>>a;
            sum += a;
            vec.push_back(a);
        }
        solve(vec,sum);
    } 
}