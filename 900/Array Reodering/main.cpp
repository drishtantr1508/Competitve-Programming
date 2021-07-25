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

int gcd(int a, int b){
    if (b%a == 0){
        return a;
    }
    gcd((b%a),a);
}


void solve(vector <int> even, vector <int> odd){
    //code for solve here
    vector <int> vec;
    
    for (auto i:even) vec.push_back(i);
    for (auto i:odd) vec.push_back(i);
    int count = 0;
    int n = vec.size();
    for (int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (gcd(vec[i],2*vec[j])>1){
                count++;
            }
        }
    }
    cout<<count<<endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++){
        int a;
        vector<int> even,odd;
        cin>>n;
        for (int j=0;j<n;j++){
            cin>>a;
            if (a%2==0) even.push_back(a);
            else odd.push_back(a);
        }
        solve(even, odd);
    } 
}