#include <iostream>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        cout<<(n+1)/10<<endl;
    }
}
