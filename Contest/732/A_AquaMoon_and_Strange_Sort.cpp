//idea is to see if all the elements at odd position in sorted vec are at odd position in unsorted vec and same for even positions. We store odd position value in a odd map and same for even.

#include <iostream>
#include <vector>
#include <set>
#include<map>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define pi (3.141592653589)
using namespace std;


//any-else function here


void solve(vector <int> vec, map <int, vector<int>> even, map <int, vector<int>> odd, int n){
    //code for solve here
    vector <int> sorted_vec = vec;
    sort(sorted_vec.begin(),sorted_vec.end());

    for(int i=0;i<n;i++){
        if (i%2==0){
            if (even[sorted_vec[i]].empty()){
                cout<<"NO"<<endl;
                return;
            }
            even[sorted_vec[i]].pop_back();
        }else{
            if (odd[sorted_vec[i]].empty()){
                cout<<"NO"<<endl;
                return;
            }
            odd[sorted_vec[i]].pop_back();
        }
    }
    cout<<"YES"<<endl;
    
    

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while (t--){
        int n,a;
        vector <int> vec;
        map <int, vector <int>> odd,even;
        cin>>n;
        for (int i=0;i<n;i++){
            cin>>a;
            vec.push_back(a);
            if(i%2==0)
                even[a].push_back(i);
            else
                odd[a].push_back(i);
        }
        solve(vec,even,odd,n);
    }
    
}