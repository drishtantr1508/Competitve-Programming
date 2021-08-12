#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define int long long
#define float double
#define rep(i, n) for(int i = 0; i < n; i++)
#define auto_rep(i, n) for(auto i:n)
#define pi (3.141592653589)
using namespace std;

void solve(){
    //code for solve here
    string s,t;
    cin>>s>>t;
    int i=s.size()-1, j = t.size()-1;

    while (i>=0 && j>=0){
        if(s[i] == t[j]){
            i--;
            j--;
        }else{
            i = i-2;
        }
    }
    if (j>=0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
