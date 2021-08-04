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
int factorial(int n)
{   
    int res = 1;
    if (n==0 || n==1){
        return res;
    }
    
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
 
// Returns factorialorial of n

void solve(int query,int n){
    //code for solve here
    
    int sum=0;
    int start = query/3;
    if (query%3==0){
        sum++;
    }
    int selection;
    for (int j=start+1; j<=n; j++){    
        sum = (sum + nCr((3*j), query))% 1000000007;
    }
    cout<<sum<<endl;

}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,q,query;
    cin>>n>>q;
    for (int i=0;i<q;i++){
        cin>>query;
        solve(query,n);
    }
}
