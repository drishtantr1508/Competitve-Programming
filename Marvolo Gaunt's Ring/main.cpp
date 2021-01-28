#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(int n,int p, int q, int r, vector <int> vec){
    //Do Something
    
    return 7;
    
}
int main()
{
    int n,p,q,r;
    cin>>n>>p>>q>>r;
    vector <int> vec;
    int a;
    for (int i=0;i<n;i++){
        cin>>a;
        vec.push_back(a);
    }
    cout<<solve(n,p,q,r,vec)<<endl;

}