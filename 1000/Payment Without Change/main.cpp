#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
// #define pb push_back
// #define pf push_front
// #define vt vector
#define float double
#define pi (3.141592653589)
using namespace std;


//any-else function here


void solve(vector <vector<int>> vec){
    //code for solve here
    int a=0,b=0,n=0,s=0;
    for (auto i:vec){
        a = i[0];
        b = i[1];
        n = i[2];
        s = i[3];

        int max_a = s/n;

        if (max_a<=a){
            if (s <= (max_a*n) + b){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if (s <= (a*n) + b){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n = 0;
    vector <vector<int>> vec;
    cin>>n;
    int temp;
    
    for (int i=0;i<n;i++){
        vector <int> temp_vec;
        for  (int j=0;j<4;j++){
            cin>>temp;
            temp_vec.push_back(temp);
        }
        vec.push_back(temp_vec);
    }

    solve(vec);
}