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
        if ((vec[i]-vec[i-1])>x){
            count_vec.push_back(vec[i]-vec[i-1]-x);
        }
    }
    
    sort(count_vec.begin(),count_vec.end());
    auto it = count_vec.begin();
    while(k*x >= *it && k > 0 && it != count_vec.end()){
        count_vec.erase(it);
        k--;
    }
    cout<<count_vec.size()+1<<endl;

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