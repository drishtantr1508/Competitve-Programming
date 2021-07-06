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
template <typename T>
void display(const vector<vector<T>> &vec) {
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }   
        cout << endl;
    }
}

void solve(int a){
    //
    int trav = (a%2==0) ? (a*a) : ((a*a)-1) ;
    vector<vector<int>> vec(a,vector<int> (a,0));
    int d = 1;
    for (int i=0;i<a*a;i=i+2){
        vec[i/a][i%a] = d;
        d++;
    }
    for (int i=1;i<trav;i=i+2){
        vec[i/a][i%a] = d;
        d++;
    }
    
    display(vec);
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    int a;
    for (int k = 1;k<=t;k++){
        cin>>a;
        if (a!=2)
            solve(a);
        else
            cout<<-1<<endl;
    }
    
}