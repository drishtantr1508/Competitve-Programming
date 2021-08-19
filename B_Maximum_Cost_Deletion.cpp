#include <iostream>
#define int long long
using namespace std;

void solve(){
    int n,a,b;
    string str;
    cin>>n>>a>>b>>str;
    if (b>=0) cout<<(a+b)*(n)<<endl;
    else{
        int count1 = 0, count0 = 0;
        for (int i=0;i<n;){
            int j = i;
            while (j<n && (str[j] == str[i])) j++;
            if (str[i] == '1') count1++;
            else count0++;
            i = j;
        }
        cout<<(((a*n)) + ((min(count1,count0)+1)*b))<<endl;
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
