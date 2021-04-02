#include <iostream>
#define int long long
using namespace std;
void solve(int n){
    if (n%2==0){
        cout<<n/2<<endl;
    }else{
        cout<<-1*(n+1)/2<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    solve(n);
}