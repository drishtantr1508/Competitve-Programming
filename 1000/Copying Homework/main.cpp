#include <iostream>
#include <vector>
#include <cstdlib>
#define int long long
#define float double
using namespace std;

//any-else function here
void solve(vector <int> vec, int n){
    //code for solve here
    vector <int> output;
    for (int i=0;i<n;i++){
        output.push_back(abs(n-vec[i])+1);
    }
    for (auto i:output){
        cout<<i<<" ";
    }
    cout<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n = 0;
    vector <int> vec ;
    cin>>n;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    solve(vec,n);
}