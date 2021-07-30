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


void solve(vector <int> vec){
    //code for solve here
    for (auto i:vec){
        if (i%2 == 0){
            for (int j=1;j<=i;j++){
                if (j%2==0){
                    cout<<(j-1)<<" ";
                }else{
                    cout<<(j+1)<<" ";
                }
            }
            cout<<endl;
        }else{
            for (int j=1;j<=i-2;j++){
                if (j%2==0){
                    cout<<(j-1)<<" ";
                }else{
                    cout<<(j+1)<<" ";
                }
                
            }
            cout<<i<<" "<<i-2<<" ";
            cout<<endl;
        }
    }

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=0;
    cin>>t;
    vector <int> vec;
    int a =0 ;
    for (int i =0;i<t;i++){
        cin>>a;
        vec.push_back(a);
    }
    solve(vec);
}