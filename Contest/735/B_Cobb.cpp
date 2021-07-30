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


// void solve(vector <int> vec, int k){
//     //code for solve here
//     int max_val = 2 - (k*(vec[1] | vec[0]));
//     for (int i=0;i<vec.size()-1;i++){
//         for(int j=i+1;j<vec.size();j++){
//             int val = (i+1)*(j+1) - (k*(vec[i] | vec[j]));
//             // cout<<val<<" ";
//             if (val > max_val){
//                 max_val = val;
                
//             }
//         }
//         // cout<<endl;
//     }
// cout<<max_val<<endl;

// }
void solve(vector <int> vec, int k){
    //code for solve here
    int max_val = 2 - (k*(vec[1] | vec[0]));
    for (int i=1;i<vec.size();i++){
        
        int val = (i+1)*(i) - (k*(vec[i] | vec[i-1]));
        // cout<<val<<" ";
        if (val > max_val){
            max_val = val;
            
        }
        
        // cout<<endl;
    }
cout<<max_val<<endl;

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n,a,k;
    cin>>t;
    for (int i=0;i<t;i++){
        vector <int> vec;
        cin>>n>>k;
        for (int j=0;j<n;j++){
            cin>>a;
            vec.push_back(a);
        }
        solve(vec,k);
    }
}
