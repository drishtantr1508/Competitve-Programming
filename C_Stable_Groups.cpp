#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;


void solve(vector<int> vec, int n, int k, int x){
    //code for solve here
    vector <int> count_vec;
    sort(vec.begin(),vec.end());
    for(int i=1;i<n;i++){
            count_vec.push_back(vec[i]-vec[i-1]);
    }    
    sort(count_vec.begin(),count_vec.end());
    int count = 0;
    for (int i=0;i<count_vec.size();i++){
        if (count_vec[i]>x){
            int nk = (count_vec[i] - 1)/x;
            if (k>=nk) k = k-nk;
            else {
                count = count_vec.size() -i ;
                break;
            }
        }
    }
    cout<<count+1<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k,x,temp;
    cin>>n>>k>>x;
    vector <int> vec (n,0);
    for (int i=0;i<n;i++){
        cin>>temp;
        vec[i] = temp;
    }
    if (n>1)
        solve(vec,n,k,x);
    else
        cout<<1<<endl;
}