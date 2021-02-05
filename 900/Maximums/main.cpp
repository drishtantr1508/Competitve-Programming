#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int n,vector <int> vec){
    vector <int> a {0,vec[0]};
    cout<<a[1]<<" ";
    int max;
    max = (a[1]>0)?a[1]:0;
    for (int i=1;i<n;i++){
        a.push_back(vec[i]+max);
        max = ((vec[i]+max)>max)?max = vec[i]+max:max;
        cout<<a[i+1]<<" ";
    }
    cout<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    vector <int> vec (0,n);
    cin>>n;
    int temp;
    for (int i=0;i<n;i++){
        cin>>temp;
        vec.push_back(temp);
    }
    solve(n,vec);
}