#include <iostream>
#include<cmath>
// #define int long long
using namespace std;
void solve(int n, int m){
    cout<<m% int(pow(2,n))<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, m;
    cin>>n>>m;
    solve(n, m);
}