#include <iostream>
#include <vector>
#define int long long
using namespace std;
void solve(){
    int m,a,b;
    cin>>m;
    vector<int> row1, row2;
    int sum1=0,sum2=0;
    for (int i=0;i<m;i++){
        cin>>a;
        row1.push_back(a);
        sum1 =sum1 + a;
    }
    for (int i=0;i<m;i++){
        cin>>b;
        row2.push_back(b);
    }
    int min_score = INT64_MAX;
    for (int i = 0;i<m;i++){
        sum1 = sum1 - row1[i];
        if(i>0) sum2 += row2[i-1];       
        int score = max(sum1,sum2);
        min_score = (score<=min_score)?score:min_score;
    }
    cout<<min_score<<endl;
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

