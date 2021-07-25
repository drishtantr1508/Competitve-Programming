#include <iostream>
#define int long long
#define float double
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int mod = n%3;
        if (mod==0) cout<<n/3<<" "<<n/3<<endl;
        else if(mod == 1) cout<<(n/3)+1<<" "<<n/3<<endl;
        else cout<<n/3<<" "<<(n/3)+1<<endl;
    }

    
}