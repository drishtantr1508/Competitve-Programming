#include <bits/stdc++.h>
using namespace std;
void solve(vector <int> vec){
    //Do something
    if ((accumulate(vec.begin(),vec.end(),0)/float(vec.size())<4.5)){
        sort(vec.begin(),vec.end());
        int i{0};
        while ((accumulate(vec.begin(),vec.end(),0)/float(vec.size())<4.5)){
            vec[i]=5;
            i++;
        }
        cout<<i<<endl;
    }else{
        cout<<0<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector <int> vec (n,0);
    for (int i=0;i<n;i++){
        cin>>vec[i];
    }
    solve(vec);
}